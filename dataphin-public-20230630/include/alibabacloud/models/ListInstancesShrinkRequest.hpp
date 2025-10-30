// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(ListQuery, listQueryShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(ListQuery, listQueryShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListInstancesShrinkRequest() = default ;
    ListInstancesShrinkRequest(const ListInstancesShrinkRequest &) = default ;
    ListInstancesShrinkRequest(ListInstancesShrinkRequest &&) = default ;
    ListInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesShrinkRequest() = default ;
    ListInstancesShrinkRequest& operator=(const ListInstancesShrinkRequest &) = default ;
    ListInstancesShrinkRequest& operator=(ListInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && return this->listQueryShrink_ == nullptr && return this->opTenantId_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ListInstancesShrinkRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // listQueryShrink Field Functions 
    bool hasListQueryShrink() const { return this->listQueryShrink_ != nullptr;};
    void deleteListQueryShrink() { this->listQueryShrink_ = nullptr;};
    inline string listQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(listQueryShrink_, "") };
    inline ListInstancesShrinkRequest& setListQueryShrink(string listQueryShrink) { DARABONBA_PTR_SET_VALUE(listQueryShrink_, listQueryShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListInstancesShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    std::shared_ptr<string> env_ = nullptr;
    std::shared_ptr<string> listQueryShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
