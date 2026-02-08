// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMATERIALDIRECTORYTREEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMATERIALDIRECTORYTREEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class QueryMaterialDirectoryTreeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMaterialDirectoryTreeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(HiddenPublic, hiddenPublic_);
      DARABONBA_PTR_TO_JSON(Root, root_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMaterialDirectoryTreeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(HiddenPublic, hiddenPublic_);
      DARABONBA_PTR_FROM_JSON(Root, root_);
    };
    QueryMaterialDirectoryTreeRequest() = default ;
    QueryMaterialDirectoryTreeRequest(const QueryMaterialDirectoryTreeRequest &) = default ;
    QueryMaterialDirectoryTreeRequest(QueryMaterialDirectoryTreeRequest &&) = default ;
    QueryMaterialDirectoryTreeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMaterialDirectoryTreeRequest() = default ;
    QueryMaterialDirectoryTreeRequest& operator=(const QueryMaterialDirectoryTreeRequest &) = default ;
    QueryMaterialDirectoryTreeRequest& operator=(QueryMaterialDirectoryTreeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->hiddenPublic_ == nullptr && this->root_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline QueryMaterialDirectoryTreeRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // hiddenPublic Field Functions 
    bool hasHiddenPublic() const { return this->hiddenPublic_ != nullptr;};
    void deleteHiddenPublic() { this->hiddenPublic_ = nullptr;};
    inline bool getHiddenPublic() const { DARABONBA_PTR_GET_DEFAULT(hiddenPublic_, false) };
    inline QueryMaterialDirectoryTreeRequest& setHiddenPublic(bool hiddenPublic) { DARABONBA_PTR_SET_VALUE(hiddenPublic_, hiddenPublic) };


    // root Field Functions 
    bool hasRoot() const { return this->root_ != nullptr;};
    void deleteRoot() { this->root_ = nullptr;};
    inline bool getRoot() const { DARABONBA_PTR_GET_DEFAULT(root_, false) };
    inline QueryMaterialDirectoryTreeRequest& setRoot(bool root) { DARABONBA_PTR_SET_VALUE(root_, root) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<bool> hiddenPublic_ {};
    // This parameter is required.
    shared_ptr<bool> root_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
