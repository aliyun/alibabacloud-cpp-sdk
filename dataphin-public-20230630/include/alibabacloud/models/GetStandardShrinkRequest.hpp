// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTANDARDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTANDARDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetStandardShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStandardShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(StandardGetQuery, standardGetQueryShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetStandardShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(StandardGetQuery, standardGetQueryShrink_);
    };
    GetStandardShrinkRequest() = default ;
    GetStandardShrinkRequest(const GetStandardShrinkRequest &) = default ;
    GetStandardShrinkRequest(GetStandardShrinkRequest &&) = default ;
    GetStandardShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStandardShrinkRequest() = default ;
    GetStandardShrinkRequest& operator=(const GetStandardShrinkRequest &) = default ;
    GetStandardShrinkRequest& operator=(GetStandardShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->standardGetQueryShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetStandardShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // standardGetQueryShrink Field Functions 
    bool hasStandardGetQueryShrink() const { return this->standardGetQueryShrink_ != nullptr;};
    void deleteStandardGetQueryShrink() { this->standardGetQueryShrink_ = nullptr;};
    inline string getStandardGetQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(standardGetQueryShrink_, "") };
    inline GetStandardShrinkRequest& setStandardGetQueryShrink(string standardGetQueryShrink) { DARABONBA_PTR_SET_VALUE(standardGetQueryShrink_, standardGetQueryShrink) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> standardGetQueryShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
