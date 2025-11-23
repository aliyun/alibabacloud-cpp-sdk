// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENMETAKNOWLEDGEASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENMETAKNOWLEDGEASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GenMetaKnowledgeAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenMetaKnowledgeAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
    };
    friend void from_json(const Darabonba::Json& j, GenMetaKnowledgeAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
    };
    GenMetaKnowledgeAssetRequest() = default ;
    GenMetaKnowledgeAssetRequest(const GenMetaKnowledgeAssetRequest &) = default ;
    GenMetaKnowledgeAssetRequest(GenMetaKnowledgeAssetRequest &&) = default ;
    GenMetaKnowledgeAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenMetaKnowledgeAssetRequest() = default ;
    GenMetaKnowledgeAssetRequest& operator=(const GenMetaKnowledgeAssetRequest &) = default ;
    GenMetaKnowledgeAssetRequest& operator=(GenMetaKnowledgeAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline GenMetaKnowledgeAssetRequest& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> dbId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
