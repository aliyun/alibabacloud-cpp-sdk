// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLETOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLETOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class GetTableTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(isInternal, isInternal_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(isInternal, isInternal_);
    };
    GetTableTokenRequest() = default ;
    GetTableTokenRequest(const GetTableTokenRequest &) = default ;
    GetTableTokenRequest(GetTableTokenRequest &&) = default ;
    GetTableTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableTokenRequest() = default ;
    GetTableTokenRequest& operator=(const GetTableTokenRequest &) = default ;
    GetTableTokenRequest& operator=(GetTableTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isInternal_ == nullptr; };
    // isInternal Field Functions 
    bool hasIsInternal() const { return this->isInternal_ != nullptr;};
    void deleteIsInternal() { this->isInternal_ = nullptr;};
    inline bool isInternal() const { DARABONBA_PTR_GET_DEFAULT(isInternal_, false) };
    inline GetTableTokenRequest& setIsInternal(bool isInternal) { DARABONBA_PTR_SET_VALUE(isInternal_, isInternal) };


  protected:
    std::shared_ptr<bool> isInternal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
