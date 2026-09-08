// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMINIENGINEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMINIENGINEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class ListMiniEngineVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMiniEngineVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KernelVersions, kernelVersions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMiniEngineVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KernelVersions, kernelVersions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMiniEngineVersionsResponseBody() = default ;
    ListMiniEngineVersionsResponseBody(const ListMiniEngineVersionsResponseBody &) = default ;
    ListMiniEngineVersionsResponseBody(ListMiniEngineVersionsResponseBody &&) = default ;
    ListMiniEngineVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMiniEngineVersionsResponseBody() = default ;
    ListMiniEngineVersionsResponseBody& operator=(const ListMiniEngineVersionsResponseBody &) = default ;
    ListMiniEngineVersionsResponseBody& operator=(ListMiniEngineVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KernelVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KernelVersions& obj) { 
        DARABONBA_PTR_TO_JSON(KernelReleaseType, kernelReleaseType_);
        DARABONBA_PTR_TO_JSON(KernelVersion, kernelVersion_);
        DARABONBA_PTR_TO_JSON(KernelVersionName, kernelVersionName_);
      };
      friend void from_json(const Darabonba::Json& j, KernelVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(KernelReleaseType, kernelReleaseType_);
        DARABONBA_PTR_FROM_JSON(KernelVersion, kernelVersion_);
        DARABONBA_PTR_FROM_JSON(KernelVersionName, kernelVersionName_);
      };
      KernelVersions() = default ;
      KernelVersions(const KernelVersions &) = default ;
      KernelVersions(KernelVersions &&) = default ;
      KernelVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KernelVersions() = default ;
      KernelVersions& operator=(const KernelVersions &) = default ;
      KernelVersions& operator=(KernelVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->kernelReleaseType_ == nullptr
        && this->kernelVersion_ == nullptr && this->kernelVersionName_ == nullptr; };
      // kernelReleaseType Field Functions 
      bool hasKernelReleaseType() const { return this->kernelReleaseType_ != nullptr;};
      void deleteKernelReleaseType() { this->kernelReleaseType_ = nullptr;};
      inline string getKernelReleaseType() const { DARABONBA_PTR_GET_DEFAULT(kernelReleaseType_, "") };
      inline KernelVersions& setKernelReleaseType(string kernelReleaseType) { DARABONBA_PTR_SET_VALUE(kernelReleaseType_, kernelReleaseType) };


      // kernelVersion Field Functions 
      bool hasKernelVersion() const { return this->kernelVersion_ != nullptr;};
      void deleteKernelVersion() { this->kernelVersion_ = nullptr;};
      inline string getKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(kernelVersion_, "") };
      inline KernelVersions& setKernelVersion(string kernelVersion) { DARABONBA_PTR_SET_VALUE(kernelVersion_, kernelVersion) };


      // kernelVersionName Field Functions 
      bool hasKernelVersionName() const { return this->kernelVersionName_ != nullptr;};
      void deleteKernelVersionName() { this->kernelVersionName_ = nullptr;};
      inline string getKernelVersionName() const { DARABONBA_PTR_GET_DEFAULT(kernelVersionName_, "") };
      inline KernelVersions& setKernelVersionName(string kernelVersionName) { DARABONBA_PTR_SET_VALUE(kernelVersionName_, kernelVersionName) };


    protected:
      shared_ptr<string> kernelReleaseType_ {};
      shared_ptr<string> kernelVersion_ {};
      shared_ptr<string> kernelVersionName_ {};
    };

    virtual bool empty() const override { return this->kernelVersions_ == nullptr
        && this->requestId_ == nullptr; };
    // kernelVersions Field Functions 
    bool hasKernelVersions() const { return this->kernelVersions_ != nullptr;};
    void deleteKernelVersions() { this->kernelVersions_ = nullptr;};
    inline const vector<ListMiniEngineVersionsResponseBody::KernelVersions> & getKernelVersions() const { DARABONBA_PTR_GET_CONST(kernelVersions_, vector<ListMiniEngineVersionsResponseBody::KernelVersions>) };
    inline vector<ListMiniEngineVersionsResponseBody::KernelVersions> getKernelVersions() { DARABONBA_PTR_GET(kernelVersions_, vector<ListMiniEngineVersionsResponseBody::KernelVersions>) };
    inline ListMiniEngineVersionsResponseBody& setKernelVersions(const vector<ListMiniEngineVersionsResponseBody::KernelVersions> & kernelVersions) { DARABONBA_PTR_SET_VALUE(kernelVersions_, kernelVersions) };
    inline ListMiniEngineVersionsResponseBody& setKernelVersions(vector<ListMiniEngineVersionsResponseBody::KernelVersions> && kernelVersions) { DARABONBA_PTR_SET_RVALUE(kernelVersions_, kernelVersions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMiniEngineVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListMiniEngineVersionsResponseBody::KernelVersions>> kernelVersions_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
