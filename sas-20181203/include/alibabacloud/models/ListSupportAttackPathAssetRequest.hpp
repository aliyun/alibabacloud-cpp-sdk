// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTATTACKPATHASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTATTACKPATHASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListSupportAttackPathAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportAttackPathAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(PathName, pathName_);
      DARABONBA_PTR_TO_JSON(PathType, pathType_);
      DARABONBA_PTR_TO_JSON(SupportType, supportType_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportAttackPathAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(PathName, pathName_);
      DARABONBA_PTR_FROM_JSON(PathType, pathType_);
      DARABONBA_PTR_FROM_JSON(SupportType, supportType_);
    };
    ListSupportAttackPathAssetRequest() = default ;
    ListSupportAttackPathAssetRequest(const ListSupportAttackPathAssetRequest &) = default ;
    ListSupportAttackPathAssetRequest(ListSupportAttackPathAssetRequest &&) = default ;
    ListSupportAttackPathAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportAttackPathAssetRequest() = default ;
    ListSupportAttackPathAssetRequest& operator=(const ListSupportAttackPathAssetRequest &) = default ;
    ListSupportAttackPathAssetRequest& operator=(ListSupportAttackPathAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeType_ == nullptr
        && return this->pathName_ == nullptr && return this->pathType_ == nullptr && return this->supportType_ == nullptr; };
    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ListSupportAttackPathAssetRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // pathName Field Functions 
    bool hasPathName() const { return this->pathName_ != nullptr;};
    void deletePathName() { this->pathName_ = nullptr;};
    inline string pathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
    inline ListSupportAttackPathAssetRequest& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


    // pathType Field Functions 
    bool hasPathType() const { return this->pathType_ != nullptr;};
    void deletePathType() { this->pathType_ = nullptr;};
    inline string pathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
    inline ListSupportAttackPathAssetRequest& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


    // supportType Field Functions 
    bool hasSupportType() const { return this->supportType_ != nullptr;};
    void deleteSupportType() { this->supportType_ = nullptr;};
    inline string supportType() const { DARABONBA_PTR_GET_DEFAULT(supportType_, "") };
    inline ListSupportAttackPathAssetRequest& setSupportType(string supportType) { DARABONBA_PTR_SET_VALUE(supportType_, supportType) };


  protected:
    // Node type, with values:
    // - **start**: Start point.
    // - **end**: End point.
    std::shared_ptr<string> nodeType_ = nullptr;
    // Path name.
    // 
    // > You can call [ListAvailableAttackPath](~~ListAvailableAttackPath~~) to query the path names.
    std::shared_ptr<string> pathName_ = nullptr;
    // Path type.
    // > You can call [ListAvailableAttackPath](~~ListAvailableAttackPath~~) to query the path types.
    std::shared_ptr<string> pathType_ = nullptr;
    // Support type, with values:
    // - **event**: Attack path alert event.
    // - **whitelist**: Attack path whitelist.
    // - **sensitive**: Sensitive assets in the attack path.
    // 
    // This parameter is required.
    std::shared_ptr<string> supportType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
