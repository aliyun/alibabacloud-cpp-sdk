// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENEPACKURLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSCENEPACKURLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetScenePackUrlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScenePackUrlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Valid, valid_);
    };
    friend void from_json(const Darabonba::Json& j, GetScenePackUrlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Valid, valid_);
    };
    GetScenePackUrlResponseBodyData() = default ;
    GetScenePackUrlResponseBodyData(const GetScenePackUrlResponseBodyData &) = default ;
    GetScenePackUrlResponseBodyData(GetScenePackUrlResponseBodyData &&) = default ;
    GetScenePackUrlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScenePackUrlResponseBodyData() = default ;
    GetScenePackUrlResponseBodyData& operator=(const GetScenePackUrlResponseBodyData &) = default ;
    GetScenePackUrlResponseBodyData& operator=(GetScenePackUrlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expire_ == nullptr
        && return this->url_ == nullptr && return this->valid_ == nullptr; };
    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline string expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, "") };
    inline GetScenePackUrlResponseBodyData& setExpire(string expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetScenePackUrlResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // valid Field Functions 
    bool hasValid() const { return this->valid_ != nullptr;};
    void deleteValid() { this->valid_ = nullptr;};
    inline bool valid() const { DARABONBA_PTR_GET_DEFAULT(valid_, false) };
    inline GetScenePackUrlResponseBodyData& setValid(bool valid) { DARABONBA_PTR_SET_VALUE(valid_, valid) };


  protected:
    std::shared_ptr<string> expire_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<bool> valid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
