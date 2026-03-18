// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(verbose, verbose_);
      DARABONBA_PTR_TO_JSON(withQuotaProductType, withQuotaProductType_);
      DARABONBA_PTR_TO_JSON(withStorageTierInfo, withStorageTierInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(verbose, verbose_);
      DARABONBA_PTR_FROM_JSON(withQuotaProductType, withQuotaProductType_);
      DARABONBA_PTR_FROM_JSON(withStorageTierInfo, withStorageTierInfo_);
    };
    GetProjectRequest() = default ;
    GetProjectRequest(const GetProjectRequest &) = default ;
    GetProjectRequest(GetProjectRequest &&) = default ;
    GetProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectRequest() = default ;
    GetProjectRequest& operator=(const GetProjectRequest &) = default ;
    GetProjectRequest& operator=(GetProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->verbose_ == nullptr
        && this->withQuotaProductType_ == nullptr && this->withStorageTierInfo_ == nullptr; };
    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline bool getVerbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, false) };
    inline GetProjectRequest& setVerbose(bool verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


    // withQuotaProductType Field Functions 
    bool hasWithQuotaProductType() const { return this->withQuotaProductType_ != nullptr;};
    void deleteWithQuotaProductType() { this->withQuotaProductType_ = nullptr;};
    inline bool getWithQuotaProductType() const { DARABONBA_PTR_GET_DEFAULT(withQuotaProductType_, false) };
    inline GetProjectRequest& setWithQuotaProductType(bool withQuotaProductType) { DARABONBA_PTR_SET_VALUE(withQuotaProductType_, withQuotaProductType) };


    // withStorageTierInfo Field Functions 
    bool hasWithStorageTierInfo() const { return this->withStorageTierInfo_ != nullptr;};
    void deleteWithStorageTierInfo() { this->withStorageTierInfo_ = nullptr;};
    inline bool getWithStorageTierInfo() const { DARABONBA_PTR_GET_DEFAULT(withStorageTierInfo_, false) };
    inline GetProjectRequest& setWithStorageTierInfo(bool withStorageTierInfo) { DARABONBA_PTR_SET_VALUE(withStorageTierInfo_, withStorageTierInfo) };


  protected:
    // Specifies whether to include additional information, such as securityProperties and superAdmins.
    shared_ptr<bool> verbose_ {};
    // Specifies whether to include additional information, such as productType.
    shared_ptr<bool> withQuotaProductType_ {};
    // Specifies whether to include additional information, such as properties.storageTierInfo.
    shared_ptr<bool> withStorageTierInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
