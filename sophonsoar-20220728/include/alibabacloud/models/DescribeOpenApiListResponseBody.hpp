// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENAPILISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENAPILISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeOpenApiListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpenApiListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpenApiListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOpenApiListResponseBody() = default ;
    DescribeOpenApiListResponseBody(const DescribeOpenApiListResponseBody &) = default ;
    DescribeOpenApiListResponseBody(DescribeOpenApiListResponseBody &&) = default ;
    DescribeOpenApiListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpenApiListResponseBody() = default ;
    DescribeOpenApiListResponseBody& operator=(const DescribeOpenApiListResponseBody &) = default ;
    DescribeOpenApiListResponseBody& operator=(DescribeOpenApiListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_ANY_TO_JSON(Directories, directories_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_ANY_TO_JSON(Versions, versions_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_ANY_FROM_JSON(Directories, directories_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_ANY_FROM_JSON(Versions, versions_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->directories_ == nullptr && this->version_ == nullptr && this->versions_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // directories Field Functions 
      bool hasDirectories() const { return this->directories_ != nullptr;};
      void deleteDirectories() { this->directories_ = nullptr;};
      inline       const Darabonba::Json & getDirectories() const { DARABONBA_GET(directories_) };
      Darabonba::Json & getDirectories() { DARABONBA_GET(directories_) };
      inline Data& setDirectories(const Darabonba::Json & directories) { DARABONBA_SET_VALUE(directories_, directories) };
      inline Data& setDirectories(Darabonba::Json && directories) { DARABONBA_SET_RVALUE(directories_, directories) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // versions Field Functions 
      bool hasVersions() const { return this->versions_ != nullptr;};
      void deleteVersions() { this->versions_ = nullptr;};
      inline       const Darabonba::Json & getVersions() const { DARABONBA_GET(versions_) };
      Darabonba::Json & getVersions() { DARABONBA_GET(versions_) };
      inline Data& setVersions(const Darabonba::Json & versions) { DARABONBA_SET_VALUE(versions_, versions) };
      inline Data& setVersions(Darabonba::Json && versions) { DARABONBA_SET_RVALUE(versions_, versions) };


    protected:
      // The response code. Valid values:
      // 
      // *   200: successful.
      // *   500: failed.
      shared_ptr<string> code_ {};
      // The information about the returned APIs.
      Darabonba::Json directories_ {};
      // The version number of the API.
      shared_ptr<string> version_ {};
      Darabonba::Json versions_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeOpenApiListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeOpenApiListResponseBody::Data) };
    inline DescribeOpenApiListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeOpenApiListResponseBody::Data) };
    inline DescribeOpenApiListResponseBody& setData(const DescribeOpenApiListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeOpenApiListResponseBody& setData(DescribeOpenApiListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOpenApiListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<DescribeOpenApiListResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
