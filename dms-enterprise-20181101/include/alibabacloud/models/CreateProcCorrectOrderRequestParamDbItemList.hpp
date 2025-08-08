// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROCCORRECTORDERREQUESTPARAMDBITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROCCORRECTORDERREQUESTPARAMDBITEMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateProcCorrectOrderRequestParamDbItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProcCorrectOrderRequestParamDbItemList& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProcCorrectOrderRequestParamDbItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
    };
    CreateProcCorrectOrderRequestParamDbItemList() = default ;
    CreateProcCorrectOrderRequestParamDbItemList(const CreateProcCorrectOrderRequestParamDbItemList &) = default ;
    CreateProcCorrectOrderRequestParamDbItemList(CreateProcCorrectOrderRequestParamDbItemList &&) = default ;
    CreateProcCorrectOrderRequestParamDbItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProcCorrectOrderRequestParamDbItemList() = default ;
    CreateProcCorrectOrderRequestParamDbItemList& operator=(const CreateProcCorrectOrderRequestParamDbItemList &) = default ;
    CreateProcCorrectOrderRequestParamDbItemList& operator=(CreateProcCorrectOrderRequestParamDbItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbId_ != nullptr
        && this->logic_ != nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline CreateProcCorrectOrderRequestParamDbItemList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline CreateProcCorrectOrderRequestParamDbItemList& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> logic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
