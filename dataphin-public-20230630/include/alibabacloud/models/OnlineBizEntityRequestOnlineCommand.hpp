// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONLINEBIZENTITYREQUESTONLINECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_ONLINEBIZENTITYREQUESTONLINECOMMAND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OnlineBizEntityRequestOnlineCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnlineBizEntityRequestOnlineCommand& obj) { 
      DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, OnlineBizEntityRequestOnlineCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    OnlineBizEntityRequestOnlineCommand() = default ;
    OnlineBizEntityRequestOnlineCommand(const OnlineBizEntityRequestOnlineCommand &) = default ;
    OnlineBizEntityRequestOnlineCommand(OnlineBizEntityRequestOnlineCommand &&) = default ;
    OnlineBizEntityRequestOnlineCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnlineBizEntityRequestOnlineCommand() = default ;
    OnlineBizEntityRequestOnlineCommand& operator=(const OnlineBizEntityRequestOnlineCommand &) = default ;
    OnlineBizEntityRequestOnlineCommand& operator=(OnlineBizEntityRequestOnlineCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizUnitId_ == nullptr
        && return this->comment_ == nullptr && return this->id_ == nullptr && return this->type_ == nullptr; };
    // bizUnitId Field Functions 
    bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
    void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
    inline int64_t bizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
    inline OnlineBizEntityRequestOnlineCommand& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline OnlineBizEntityRequestOnlineCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline OnlineBizEntityRequestOnlineCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline OnlineBizEntityRequestOnlineCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> bizUnitId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> comment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
