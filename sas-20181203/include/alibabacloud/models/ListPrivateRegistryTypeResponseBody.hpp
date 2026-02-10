// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEREGISTRYTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEREGISTRYTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPrivateRegistryTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateRegistryTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegistryTypeInfos, registryTypeInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateRegistryTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegistryTypeInfos, registryTypeInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPrivateRegistryTypeResponseBody() = default ;
    ListPrivateRegistryTypeResponseBody(const ListPrivateRegistryTypeResponseBody &) = default ;
    ListPrivateRegistryTypeResponseBody(ListPrivateRegistryTypeResponseBody &&) = default ;
    ListPrivateRegistryTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateRegistryTypeResponseBody() = default ;
    ListPrivateRegistryTypeResponseBody& operator=(const ListPrivateRegistryTypeResponseBody &) = default ;
    ListPrivateRegistryTypeResponseBody& operator=(ListPrivateRegistryTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegistryTypeInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegistryTypeInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
      };
      friend void from_json(const Darabonba::Json& j, RegistryTypeInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
      };
      RegistryTypeInfos() = default ;
      RegistryTypeInfos(const RegistryTypeInfos &) = default ;
      RegistryTypeInfos(RegistryTypeInfos &&) = default ;
      RegistryTypeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegistryTypeInfos() = default ;
      RegistryTypeInfos& operator=(const RegistryTypeInfos &) = default ;
      RegistryTypeInfos& operator=(RegistryTypeInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->registryType_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline RegistryTypeInfos& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // registryType Field Functions 
      bool hasRegistryType() const { return this->registryType_ != nullptr;};
      void deleteRegistryType() { this->registryType_ = nullptr;};
      inline string getRegistryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
      inline RegistryTypeInfos& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    protected:
      // The number of image repositories.
      shared_ptr<int64_t> count_ {};
      // The name of the image repository type. Valid values:
      // 
      // *   **acr**: Container Registry
      // *   **harbor**: Harbor
      // *   **quay**: Quay
      // *   **CI/CD**: Jenkins
      shared_ptr<string> registryType_ {};
    };

    virtual bool empty() const override { return this->registryTypeInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // registryTypeInfos Field Functions 
    bool hasRegistryTypeInfos() const { return this->registryTypeInfos_ != nullptr;};
    void deleteRegistryTypeInfos() { this->registryTypeInfos_ = nullptr;};
    inline const vector<ListPrivateRegistryTypeResponseBody::RegistryTypeInfos> & getRegistryTypeInfos() const { DARABONBA_PTR_GET_CONST(registryTypeInfos_, vector<ListPrivateRegistryTypeResponseBody::RegistryTypeInfos>) };
    inline vector<ListPrivateRegistryTypeResponseBody::RegistryTypeInfos> getRegistryTypeInfos() { DARABONBA_PTR_GET(registryTypeInfos_, vector<ListPrivateRegistryTypeResponseBody::RegistryTypeInfos>) };
    inline ListPrivateRegistryTypeResponseBody& setRegistryTypeInfos(const vector<ListPrivateRegistryTypeResponseBody::RegistryTypeInfos> & registryTypeInfos) { DARABONBA_PTR_SET_VALUE(registryTypeInfos_, registryTypeInfos) };
    inline ListPrivateRegistryTypeResponseBody& setRegistryTypeInfos(vector<ListPrivateRegistryTypeResponseBody::RegistryTypeInfos> && registryTypeInfos) { DARABONBA_PTR_SET_RVALUE(registryTypeInfos_, registryTypeInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrivateRegistryTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of image repository types.
    shared_ptr<vector<ListPrivateRegistryTypeResponseBody::RegistryTypeInfos>> registryTypeInfos_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
