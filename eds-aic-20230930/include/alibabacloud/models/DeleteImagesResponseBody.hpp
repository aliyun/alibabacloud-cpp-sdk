// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIMAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEIMAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DeleteImagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteImagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteImagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteImagesResponseBody() = default ;
    DeleteImagesResponseBody(const DeleteImagesResponseBody &) = default ;
    DeleteImagesResponseBody(DeleteImagesResponseBody &&) = default ;
    DeleteImagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteImagesResponseBody() = default ;
    DeleteImagesResponseBody& operator=(const DeleteImagesResponseBody &) = default ;
    DeleteImagesResponseBody& operator=(DeleteImagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FailDeleteImageIds, failDeleteImageIds_);
        DARABONBA_PTR_TO_JSON(SuccessDeleteImageIds, successDeleteImageIds_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FailDeleteImageIds, failDeleteImageIds_);
        DARABONBA_PTR_FROM_JSON(SuccessDeleteImageIds, successDeleteImageIds_);
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
      virtual bool empty() const override { return this->failDeleteImageIds_ == nullptr
        && this->successDeleteImageIds_ == nullptr; };
      // failDeleteImageIds Field Functions 
      bool hasFailDeleteImageIds() const { return this->failDeleteImageIds_ != nullptr;};
      void deleteFailDeleteImageIds() { this->failDeleteImageIds_ = nullptr;};
      inline const vector<string> & getFailDeleteImageIds() const { DARABONBA_PTR_GET_CONST(failDeleteImageIds_, vector<string>) };
      inline vector<string> getFailDeleteImageIds() { DARABONBA_PTR_GET(failDeleteImageIds_, vector<string>) };
      inline Data& setFailDeleteImageIds(const vector<string> & failDeleteImageIds) { DARABONBA_PTR_SET_VALUE(failDeleteImageIds_, failDeleteImageIds) };
      inline Data& setFailDeleteImageIds(vector<string> && failDeleteImageIds) { DARABONBA_PTR_SET_RVALUE(failDeleteImageIds_, failDeleteImageIds) };


      // successDeleteImageIds Field Functions 
      bool hasSuccessDeleteImageIds() const { return this->successDeleteImageIds_ != nullptr;};
      void deleteSuccessDeleteImageIds() { this->successDeleteImageIds_ = nullptr;};
      inline const vector<string> & getSuccessDeleteImageIds() const { DARABONBA_PTR_GET_CONST(successDeleteImageIds_, vector<string>) };
      inline vector<string> getSuccessDeleteImageIds() { DARABONBA_PTR_GET(successDeleteImageIds_, vector<string>) };
      inline Data& setSuccessDeleteImageIds(const vector<string> & successDeleteImageIds) { DARABONBA_PTR_SET_VALUE(successDeleteImageIds_, successDeleteImageIds) };
      inline Data& setSuccessDeleteImageIds(vector<string> && successDeleteImageIds) { DARABONBA_PTR_SET_RVALUE(successDeleteImageIds_, successDeleteImageIds) };


    protected:
      // The IDs of the images that failed to be deleted.
      shared_ptr<vector<string>> failDeleteImageIds_ {};
      // The IDs of the images that are successfully deleted.
      shared_ptr<vector<string>> successDeleteImageIds_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteImagesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DeleteImagesResponseBody::Data) };
    inline DeleteImagesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DeleteImagesResponseBody::Data) };
    inline DeleteImagesResponseBody& setData(const DeleteImagesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteImagesResponseBody& setData(DeleteImagesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteImagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The images.
    shared_ptr<DeleteImagesResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
