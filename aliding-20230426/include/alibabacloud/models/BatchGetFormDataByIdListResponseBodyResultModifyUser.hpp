// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETFORMDATABYIDLISTRESPONSEBODYRESULTMODIFYUSER_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETFORMDATABYIDLISTRESPONSEBODYRESULTMODIFYUSER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchGetFormDataByIdListResponseBodyResultModifyUserName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class BatchGetFormDataByIdListResponseBodyResultModifyUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetFormDataByIdListResponseBodyResultModifyUser& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetFormDataByIdListResponseBodyResultModifyUser& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    BatchGetFormDataByIdListResponseBodyResultModifyUser() = default ;
    BatchGetFormDataByIdListResponseBodyResultModifyUser(const BatchGetFormDataByIdListResponseBodyResultModifyUser &) = default ;
    BatchGetFormDataByIdListResponseBodyResultModifyUser(BatchGetFormDataByIdListResponseBodyResultModifyUser &&) = default ;
    BatchGetFormDataByIdListResponseBodyResultModifyUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetFormDataByIdListResponseBodyResultModifyUser() = default ;
    BatchGetFormDataByIdListResponseBodyResultModifyUser& operator=(const BatchGetFormDataByIdListResponseBodyResultModifyUser &) = default ;
    BatchGetFormDataByIdListResponseBodyResultModifyUser& operator=(BatchGetFormDataByIdListResponseBodyResultModifyUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->userId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline const Models::BatchGetFormDataByIdListResponseBodyResultModifyUserName & name() const { DARABONBA_PTR_GET_CONST(name_, Models::BatchGetFormDataByIdListResponseBodyResultModifyUserName) };
    inline Models::BatchGetFormDataByIdListResponseBodyResultModifyUserName name() { DARABONBA_PTR_GET(name_, Models::BatchGetFormDataByIdListResponseBodyResultModifyUserName) };
    inline BatchGetFormDataByIdListResponseBodyResultModifyUser& setName(const Models::BatchGetFormDataByIdListResponseBodyResultModifyUserName & name) { DARABONBA_PTR_SET_VALUE(name_, name) };
    inline BatchGetFormDataByIdListResponseBodyResultModifyUser& setName(Models::BatchGetFormDataByIdListResponseBodyResultModifyUserName && name) { DARABONBA_PTR_SET_RVALUE(name_, name) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline BatchGetFormDataByIdListResponseBodyResultModifyUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<Models::BatchGetFormDataByIdListResponseBodyResultModifyUserName> name_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
