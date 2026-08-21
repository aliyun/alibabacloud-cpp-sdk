// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(includeDetails, includeDetails_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(includeDetails, includeDetails_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GetSourceRequest() = default ;
    GetSourceRequest(const GetSourceRequest &) = default ;
    GetSourceRequest(GetSourceRequest &&) = default ;
    GetSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSourceRequest() = default ;
    GetSourceRequest& operator=(const GetSourceRequest &) = default ;
    GetSourceRequest& operator=(GetSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->includeDetails_ == nullptr
        && this->sourceId_ == nullptr && this->tenantId_ == nullptr; };
    // includeDetails Field Functions 
    bool hasIncludeDetails() const { return this->includeDetails_ != nullptr;};
    void deleteIncludeDetails() { this->includeDetails_ = nullptr;};
    inline bool getIncludeDetails() const { DARABONBA_PTR_GET_DEFAULT(includeDetails_, false) };
    inline GetSourceRequest& setIncludeDetails(bool includeDetails) { DARABONBA_PTR_SET_VALUE(includeDetails_, includeDetails) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline GetSourceRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetSourceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // Specifies whether to return large detail fields (settings / notes / structuredTables / unstructuredDocs). Default value: False, which returns only metadata.
    shared_ptr<bool> includeDetails_ {};
    // The primary ID of the resource.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // The tenant ID to which the task belongs.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
