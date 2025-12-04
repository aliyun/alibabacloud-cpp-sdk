// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVERUNREQUESTEXTLOGINUSER_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVERUNREQUESTEXTLOGINUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class RetrieveRunRequestExtLoginUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveRunRequestExtLoginUser& obj) { 
      DARABONBA_PTR_TO_JSON(extLoginUserDomain, extLoginUserDomain_);
      DARABONBA_PTR_TO_JSON(extLoginUserId, extLoginUserId_);
      DARABONBA_PTR_TO_JSON(extLoginUserName, extLoginUserName_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveRunRequestExtLoginUser& obj) { 
      DARABONBA_PTR_FROM_JSON(extLoginUserDomain, extLoginUserDomain_);
      DARABONBA_PTR_FROM_JSON(extLoginUserId, extLoginUserId_);
      DARABONBA_PTR_FROM_JSON(extLoginUserName, extLoginUserName_);
    };
    RetrieveRunRequestExtLoginUser() = default ;
    RetrieveRunRequestExtLoginUser(const RetrieveRunRequestExtLoginUser &) = default ;
    RetrieveRunRequestExtLoginUser(RetrieveRunRequestExtLoginUser &&) = default ;
    RetrieveRunRequestExtLoginUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveRunRequestExtLoginUser() = default ;
    RetrieveRunRequestExtLoginUser& operator=(const RetrieveRunRequestExtLoginUser &) = default ;
    RetrieveRunRequestExtLoginUser& operator=(RetrieveRunRequestExtLoginUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extLoginUserDomain_ == nullptr
        && return this->extLoginUserId_ == nullptr && return this->extLoginUserName_ == nullptr; };
    // extLoginUserDomain Field Functions 
    bool hasExtLoginUserDomain() const { return this->extLoginUserDomain_ != nullptr;};
    void deleteExtLoginUserDomain() { this->extLoginUserDomain_ = nullptr;};
    inline string extLoginUserDomain() const { DARABONBA_PTR_GET_DEFAULT(extLoginUserDomain_, "") };
    inline RetrieveRunRequestExtLoginUser& setExtLoginUserDomain(string extLoginUserDomain) { DARABONBA_PTR_SET_VALUE(extLoginUserDomain_, extLoginUserDomain) };


    // extLoginUserId Field Functions 
    bool hasExtLoginUserId() const { return this->extLoginUserId_ != nullptr;};
    void deleteExtLoginUserId() { this->extLoginUserId_ = nullptr;};
    inline string extLoginUserId() const { DARABONBA_PTR_GET_DEFAULT(extLoginUserId_, "") };
    inline RetrieveRunRequestExtLoginUser& setExtLoginUserId(string extLoginUserId) { DARABONBA_PTR_SET_VALUE(extLoginUserId_, extLoginUserId) };


    // extLoginUserName Field Functions 
    bool hasExtLoginUserName() const { return this->extLoginUserName_ != nullptr;};
    void deleteExtLoginUserName() { this->extLoginUserName_ = nullptr;};
    inline string extLoginUserName() const { DARABONBA_PTR_GET_DEFAULT(extLoginUserName_, "") };
    inline RetrieveRunRequestExtLoginUser& setExtLoginUserName(string extLoginUserName) { DARABONBA_PTR_SET_VALUE(extLoginUserName_, extLoginUserName) };


  protected:
    std::shared_ptr<string> extLoginUserDomain_ = nullptr;
    std::shared_ptr<string> extLoginUserId_ = nullptr;
    std::shared_ptr<string> extLoginUserName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
