// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEATTACHMENTATTRIBUTESREQUESTPRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEATTACHMENTATTRIBUTESREQUESTPRIVATEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInstanceAttachmentAttributesRequestPrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceAttachmentAttributesRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MatchCriteria, matchCriteria_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceAttachmentAttributesRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MatchCriteria, matchCriteria_);
    };
    ModifyInstanceAttachmentAttributesRequestPrivatePoolOptions() = default ;
    ModifyInstanceAttachmentAttributesRequestPrivatePoolOptions(const ModifyInstanceAttachmentAttributesRequestPrivatePoolOptions &) = default ;
    ModifyInstanceAttachmentAttributesRequestPrivatePoolOptions(ModifyInstanceAttachmentAttributesRequestPrivatePoolOptions &&) = default ;
    ModifyInstanceAttachmentAttributesRequestPrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceAttachmentAttributesRequestPrivatePoolOptions() = default ;
    ModifyInstanceAttachmentAttributesRequestPrivatePoolOptions& operator=(const ModifyInstanceAttachmentAttributesRequestPrivatePoolOptions &) = default ;
    ModifyInstanceAttachmentAttributesRequestPrivatePoolOptions& operator=(ModifyInstanceAttachmentAttributesRequestPrivatePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->matchCriteria_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModifyInstanceAttachmentAttributesRequestPrivatePoolOptions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchCriteria Field Functions 
    bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
    void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
    inline string matchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
    inline ModifyInstanceAttachmentAttributesRequestPrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


  protected:
    // The ID of the private pool. Set the value to the ID of the elasticity assurance or capacity reservation that generates the private pool.
    // 
    // *   This parameter is required when `PrivatePoolOptions.MatchCriteria` is set to `Target`.
    // *   This parameter must be empty when `PrivatePoolOptions.MatchCriteria` is set to `Open` or `None`.
    std::shared_ptr<string> id_ = nullptr;
    // The new type of private pool. Valid values:
    // 
    // *   Open: open private pool. The system matches the instance with an open private pool. If no matching open private pools exist, the system uses resources in the public pool to start the instance.
    // *   Target: specified private pool. The system uses the capacity in a specified private pool to start the instance. If the specified private pool is unavailable, the instance cannot be started. You must use `PrivatePoolOptions.Id` to specify the ID of a private pool.
    // *   None: no private pool. The capacity in private pools is not used to start the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> matchCriteria_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
