// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETOPERATERECORDRESPONSEBODYRECORDSOPERATOR_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETOPERATERECORDRESPONSEBODYRECORDSOPERATOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListTicketOperateRecordResponseBodyRecordsOperator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketOperateRecordResponseBodyRecordsOperator& obj) { 
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(UnionId, unionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketOperateRecordResponseBodyRecordsOperator& obj) { 
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(UnionId, unionId_);
    };
    ListTicketOperateRecordResponseBodyRecordsOperator() = default ;
    ListTicketOperateRecordResponseBodyRecordsOperator(const ListTicketOperateRecordResponseBodyRecordsOperator &) = default ;
    ListTicketOperateRecordResponseBodyRecordsOperator(ListTicketOperateRecordResponseBodyRecordsOperator &&) = default ;
    ListTicketOperateRecordResponseBodyRecordsOperator(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketOperateRecordResponseBodyRecordsOperator() = default ;
    ListTicketOperateRecordResponseBodyRecordsOperator& operator=(const ListTicketOperateRecordResponseBodyRecordsOperator &) = default ;
    ListTicketOperateRecordResponseBodyRecordsOperator& operator=(ListTicketOperateRecordResponseBodyRecordsOperator &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nickName_ == nullptr
        && return this->unionId_ == nullptr; };
    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline ListTicketOperateRecordResponseBodyRecordsOperator& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // unionId Field Functions 
    bool hasUnionId() const { return this->unionId_ != nullptr;};
    void deleteUnionId() { this->unionId_ = nullptr;};
    inline string unionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
    inline ListTicketOperateRecordResponseBodyRecordsOperator& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


  protected:
    std::shared_ptr<string> nickName_ = nullptr;
    std::shared_ptr<string> unionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
