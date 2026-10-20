// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCVEHOTFIXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCVEHOTFIXREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetCveHotfixRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCveHotfixRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cveIds, cveIds_);
      DARABONBA_PTR_TO_JSON(kernelVersions, kernelVersions_);
    };
    friend void from_json(const Darabonba::Json& j, GetCveHotfixRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cveIds, cveIds_);
      DARABONBA_PTR_FROM_JSON(kernelVersions, kernelVersions_);
    };
    GetCveHotfixRequest() = default ;
    GetCveHotfixRequest(const GetCveHotfixRequest &) = default ;
    GetCveHotfixRequest(GetCveHotfixRequest &&) = default ;
    GetCveHotfixRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCveHotfixRequest() = default ;
    GetCveHotfixRequest& operator=(const GetCveHotfixRequest &) = default ;
    GetCveHotfixRequest& operator=(GetCveHotfixRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cveIds_ == nullptr
        && this->kernelVersions_ == nullptr; };
    // cveIds Field Functions 
    bool hasCveIds() const { return this->cveIds_ != nullptr;};
    void deleteCveIds() { this->cveIds_ = nullptr;};
    inline const vector<string> & getCveIds() const { DARABONBA_PTR_GET_CONST(cveIds_, vector<string>) };
    inline vector<string> getCveIds() { DARABONBA_PTR_GET(cveIds_, vector<string>) };
    inline GetCveHotfixRequest& setCveIds(const vector<string> & cveIds) { DARABONBA_PTR_SET_VALUE(cveIds_, cveIds) };
    inline GetCveHotfixRequest& setCveIds(vector<string> && cveIds) { DARABONBA_PTR_SET_RVALUE(cveIds_, cveIds) };


    // kernelVersions Field Functions 
    bool hasKernelVersions() const { return this->kernelVersions_ != nullptr;};
    void deleteKernelVersions() { this->kernelVersions_ = nullptr;};
    inline const vector<string> & getKernelVersions() const { DARABONBA_PTR_GET_CONST(kernelVersions_, vector<string>) };
    inline vector<string> getKernelVersions() { DARABONBA_PTR_GET(kernelVersions_, vector<string>) };
    inline GetCveHotfixRequest& setKernelVersions(const vector<string> & kernelVersions) { DARABONBA_PTR_SET_VALUE(kernelVersions_, kernelVersions) };
    inline GetCveHotfixRequest& setKernelVersions(vector<string> && kernelVersions) { DARABONBA_PTR_SET_RVALUE(kernelVersions_, kernelVersions) };


  protected:
    // The list of CVE IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> cveIds_ {};
    // The list of full kernel versions.
    shared_ptr<vector<string>> kernelVersions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
