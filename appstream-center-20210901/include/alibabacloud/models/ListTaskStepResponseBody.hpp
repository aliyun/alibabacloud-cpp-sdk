// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKSTEPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKSTEPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListTaskStepResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskStepResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskStepResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTaskStepResponseBody() = default ;
    ListTaskStepResponseBody(const ListTaskStepResponseBody &) = default ;
    ListTaskStepResponseBody(ListTaskStepResponseBody &&) = default ;
    ListTaskStepResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskStepResponseBody() = default ;
    ListTaskStepResponseBody& operator=(const ListTaskStepResponseBody &) = default ;
    ListTaskStepResponseBody& operator=(ListTaskStepResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(CategoryEn, categoryEn_);
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(CategoryEn, categoryEn_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->category_ == nullptr && this->categoryEn_ == nullptr && this->index_ == nullptr && this->name_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Data& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Data& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // categoryEn Field Functions 
      bool hasCategoryEn() const { return this->categoryEn_ != nullptr;};
      void deleteCategoryEn() { this->categoryEn_ = nullptr;};
      inline string getCategoryEn() const { DARABONBA_PTR_GET_DEFAULT(categoryEn_, "") };
      inline Data& setCategoryEn(string categoryEn) { DARABONBA_PTR_SET_VALUE(categoryEn_, categoryEn) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
      inline Data& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The interaction method of the step. Valid values:
      // 
      // - **prompt**: Displays step prompts.
      // - **connection**: Provides connection operations to enter the builder or validation environment.
      // - **prompt_connection**: Provides both prompts and connection operations.
      shared_ptr<string> action_ {};
      // The Chinese name of the phase to which the step belongs, such as builder environment preparation or test validation.
      shared_ptr<string> category_ {};
      // The English name of the phase to which the step belongs. This field is returned for image creation steps, but may not be returned for application adaptation steps.
      shared_ptr<string> categoryEn_ {};
      // The numeric index of the step definition, which is used to identify the step and its sequence. Do not use this value as the completion percentage.
      shared_ptr<int64_t> index_ {};
      // The name identifier of the step, which is used to match the step records returned by GetTask.
      // 
      // Steps when Type is set to IMAGE:
      // 
      // - **INIT**: Initialize the task.
      // - **CREATE_BUILDER_ENV**: Create the builder environment.
      // - **DEPLOY_BUILDER_ENV**: Deploy the builder environment.
      // - **INIT_BUILDER**: Initialize the builder tool.
      // - **DOWNLOAD_APP**: Download application resources.
      // - **START_BUILD**: Start image creation.
      // - **COMPLETE_INSTALL**: Complete application installation and configuration.
      // - **CREATE_VALIDATE_ENV**: Create the validation environment.
      // - **DEPLOY_VALIDATE_ENV**: Deploy the validation environment.
      // - **COMPLETE_VALIDATE**: Complete image validation.
      // - **ARCHIVE_DATA**: Archive image data.
      // - **CREATE_IMAGE**: Generate the image.
      // - **FINISH_ADAPT**: End the creation process.
      // 
      // Steps when Type is set to ADAPTOR:
      // 
      // - **INIT**: Initialize the task.
      // - **CREATE_BUILDER_ENV**: Create the builder environment.
      // - **DEPLOY_BUILDER_ENV**: Deploy the builder environment.
      // - **INIT_BUILDER**: Initialize the builder tool.
      // - **DOWNLOAD_APP**: Download application resources.
      // - **START_VHD**: Start application recording.
      // - **BUILD_VHD**: Generate the application VHD.
      // - **UPLOAD_VHD**: Upload the application VHD.
      // - **COMPLETE_BUILDER**: Complete application creation.
      // - **CREATE_VALIDATE_ENV**: Create the validation environment.
      // - **DEPLOY_VALIDATE_ENV**: Deploy the validation environment.
      // - **COMPLETE_VALIDATE**: Complete application validation.
      // - **CREATE_IMAGE**: Generate the application image.
      // - **FINISH_ADAPT**: End the application adaptation process.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListTaskStepResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListTaskStepResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListTaskStepResponseBody::Data>) };
    inline vector<ListTaskStepResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListTaskStepResponseBody::Data>) };
    inline ListTaskStepResponseBody& setData(const vector<ListTaskStepResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTaskStepResponseBody& setData(vector<ListTaskStepResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskStepResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The total number of records returned in the list.
    shared_ptr<int32_t> count_ {};
    // The list of step definitions for the specified task type.
    shared_ptr<vector<ListTaskStepResponseBody::Data>> data_ {};
    // The unique identifier of the request. You can provide this value for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
