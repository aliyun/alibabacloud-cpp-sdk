// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAINGESTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAINGESTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataIngestionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataIngestionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataIngestionIds, dataIngestionIds_);
      DARABONBA_PTR_TO_JSON(DataIngestionStatus, dataIngestionStatus_);
      DARABONBA_PTR_TO_JSON(DataIngestionTemplateIds, dataIngestionTemplateIds_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataIngestionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataIngestionIds, dataIngestionIds_);
      DARABONBA_PTR_FROM_JSON(DataIngestionStatus, dataIngestionStatus_);
      DARABONBA_PTR_FROM_JSON(DataIngestionTemplateIds, dataIngestionTemplateIds_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    ListDataIngestionsRequest() = default ;
    ListDataIngestionsRequest(const ListDataIngestionsRequest &) = default ;
    ListDataIngestionsRequest(ListDataIngestionsRequest &&) = default ;
    ListDataIngestionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataIngestionsRequest() = default ;
    ListDataIngestionsRequest& operator=(const ListDataIngestionsRequest &) = default ;
    ListDataIngestionsRequest& operator=(ListDataIngestionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataIngestionIds_ == nullptr
        && return this->dataIngestionStatus_ == nullptr && return this->dataIngestionTemplateIds_ == nullptr && return this->lang_ == nullptr && return this->productId_ == nullptr && return this->regionId_ == nullptr
        && return this->roleFor_ == nullptr; };
    // dataIngestionIds Field Functions 
    bool hasDataIngestionIds() const { return this->dataIngestionIds_ != nullptr;};
    void deleteDataIngestionIds() { this->dataIngestionIds_ = nullptr;};
    inline const vector<string> & dataIngestionIds() const { DARABONBA_PTR_GET_CONST(dataIngestionIds_, vector<string>) };
    inline vector<string> dataIngestionIds() { DARABONBA_PTR_GET(dataIngestionIds_, vector<string>) };
    inline ListDataIngestionsRequest& setDataIngestionIds(const vector<string> & dataIngestionIds) { DARABONBA_PTR_SET_VALUE(dataIngestionIds_, dataIngestionIds) };
    inline ListDataIngestionsRequest& setDataIngestionIds(vector<string> && dataIngestionIds) { DARABONBA_PTR_SET_RVALUE(dataIngestionIds_, dataIngestionIds) };


    // dataIngestionStatus Field Functions 
    bool hasDataIngestionStatus() const { return this->dataIngestionStatus_ != nullptr;};
    void deleteDataIngestionStatus() { this->dataIngestionStatus_ = nullptr;};
    inline string dataIngestionStatus() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionStatus_, "") };
    inline ListDataIngestionsRequest& setDataIngestionStatus(string dataIngestionStatus) { DARABONBA_PTR_SET_VALUE(dataIngestionStatus_, dataIngestionStatus) };


    // dataIngestionTemplateIds Field Functions 
    bool hasDataIngestionTemplateIds() const { return this->dataIngestionTemplateIds_ != nullptr;};
    void deleteDataIngestionTemplateIds() { this->dataIngestionTemplateIds_ = nullptr;};
    inline const vector<string> & dataIngestionTemplateIds() const { DARABONBA_PTR_GET_CONST(dataIngestionTemplateIds_, vector<string>) };
    inline vector<string> dataIngestionTemplateIds() { DARABONBA_PTR_GET(dataIngestionTemplateIds_, vector<string>) };
    inline ListDataIngestionsRequest& setDataIngestionTemplateIds(const vector<string> & dataIngestionTemplateIds) { DARABONBA_PTR_SET_VALUE(dataIngestionTemplateIds_, dataIngestionTemplateIds) };
    inline ListDataIngestionsRequest& setDataIngestionTemplateIds(vector<string> && dataIngestionTemplateIds) { DARABONBA_PTR_SET_RVALUE(dataIngestionTemplateIds_, dataIngestionTemplateIds) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListDataIngestionsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ListDataIngestionsRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDataIngestionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListDataIngestionsRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    std::shared_ptr<vector<string>> dataIngestionIds_ = nullptr;
    std::shared_ptr<string> dataIngestionStatus_ = nullptr;
    std::shared_ptr<vector<string>> dataIngestionTemplateIds_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
