// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPERIENCEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPERIENCEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class ListExperienceDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExperienceDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListExperienceDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListExperienceDataResponseBody() = default ;
    ListExperienceDataResponseBody(const ListExperienceDataResponseBody &) = default ;
    ListExperienceDataResponseBody(ListExperienceDataResponseBody &&) = default ;
    ListExperienceDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExperienceDataResponseBody() = default ;
    ListExperienceDataResponseBody& operator=(const ListExperienceDataResponseBody &) = default ;
    ListExperienceDataResponseBody& operator=(ListExperienceDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(contentType, contentType_);
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(dataSize, dataSize_);
        DARABONBA_PTR_TO_JSON(dataType, dataType_);
        DARABONBA_PTR_TO_JSON(dataValue, dataValue_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(serviceType, serviceType_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(contentType, contentType_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(dataSize, dataSize_);
        DARABONBA_PTR_FROM_JSON(dataType, dataType_);
        DARABONBA_PTR_FROM_JSON(dataValue, dataValue_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(serviceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contentType_ == nullptr
        && this->created_ == nullptr && this->dataSize_ == nullptr && this->dataType_ == nullptr && this->dataValue_ == nullptr && this->id_ == nullptr
        && this->name_ == nullptr && this->serviceType_ == nullptr && this->updated_ == nullptr; };
      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Result& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int64_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
      inline Result& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // dataSize Field Functions 
      bool hasDataSize() const { return this->dataSize_ != nullptr;};
      void deleteDataSize() { this->dataSize_ = nullptr;};
      inline int64_t getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
      inline Result& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline Result& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // dataValue Field Functions 
      bool hasDataValue() const { return this->dataValue_ != nullptr;};
      void deleteDataValue() { this->dataValue_ = nullptr;};
      inline string getDataValue() const { DARABONBA_PTR_GET_DEFAULT(dataValue_, "") };
      inline Result& setDataValue(string dataValue) { DARABONBA_PTR_SET_VALUE(dataValue_, dataValue) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Result& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline Result& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline int64_t getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0L) };
      inline Result& setUpdated(int64_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    protected:
      // **The content type.**.
      shared_ptr<string> contentType_ {};
      // **The creation time.**.
      shared_ptr<int64_t> created_ {};
      // **The data size.**.
      shared_ptr<int64_t> dataSize_ {};
      // The data type. Valid values:
      // 
      // - file
      // - url.
      shared_ptr<string> dataType_ {};
      // The data value.
      shared_ptr<string> dataValue_ {};
      // ID
      shared_ptr<int64_t> id_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The service type.
      shared_ptr<string> serviceType_ {};
      // The update time.
      shared_ptr<int64_t> updated_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExperienceDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListExperienceDataResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListExperienceDataResponseBody::Result>) };
    inline vector<ListExperienceDataResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListExperienceDataResponseBody::Result>) };
    inline ListExperienceDataResponseBody& setResult(const vector<ListExperienceDataResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListExperienceDataResponseBody& setResult(vector<ListExperienceDataResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<vector<ListExperienceDataResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
