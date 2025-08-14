// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCEREQUESTCOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCEREQUESTCOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class StartInstanceRequestCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartInstanceRequestCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlphaSwitch, alphaSwitch_);
      DARABONBA_PTR_TO_JSON(BackGroundImageUrl, backGroundImageUrl_);
      DARABONBA_PTR_TO_JSON(Locate, locate_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstanceRequestCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlphaSwitch, alphaSwitch_);
      DARABONBA_PTR_FROM_JSON(BackGroundImageUrl, backGroundImageUrl_);
      DARABONBA_PTR_FROM_JSON(Locate, locate_);
    };
    StartInstanceRequestCommandRequest() = default ;
    StartInstanceRequestCommandRequest(const StartInstanceRequestCommandRequest &) = default ;
    StartInstanceRequestCommandRequest(StartInstanceRequestCommandRequest &&) = default ;
    StartInstanceRequestCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartInstanceRequestCommandRequest() = default ;
    StartInstanceRequestCommandRequest& operator=(const StartInstanceRequestCommandRequest &) = default ;
    StartInstanceRequestCommandRequest& operator=(StartInstanceRequestCommandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alphaSwitch_ != nullptr
        && this->backGroundImageUrl_ != nullptr && this->locate_ != nullptr; };
    // alphaSwitch Field Functions 
    bool hasAlphaSwitch() const { return this->alphaSwitch_ != nullptr;};
    void deleteAlphaSwitch() { this->alphaSwitch_ = nullptr;};
    inline bool alphaSwitch() const { DARABONBA_PTR_GET_DEFAULT(alphaSwitch_, false) };
    inline StartInstanceRequestCommandRequest& setAlphaSwitch(bool alphaSwitch) { DARABONBA_PTR_SET_VALUE(alphaSwitch_, alphaSwitch) };


    // backGroundImageUrl Field Functions 
    bool hasBackGroundImageUrl() const { return this->backGroundImageUrl_ != nullptr;};
    void deleteBackGroundImageUrl() { this->backGroundImageUrl_ = nullptr;};
    inline string backGroundImageUrl() const { DARABONBA_PTR_GET_DEFAULT(backGroundImageUrl_, "") };
    inline StartInstanceRequestCommandRequest& setBackGroundImageUrl(string backGroundImageUrl) { DARABONBA_PTR_SET_VALUE(backGroundImageUrl_, backGroundImageUrl) };


    // locate Field Functions 
    bool hasLocate() const { return this->locate_ != nullptr;};
    void deleteLocate() { this->locate_ = nullptr;};
    inline int32_t locate() const { DARABONBA_PTR_GET_DEFAULT(locate_, 0) };
    inline StartInstanceRequestCommandRequest& setLocate(int32_t locate) { DARABONBA_PTR_SET_VALUE(locate_, locate) };


  protected:
    std::shared_ptr<bool> alphaSwitch_ = nullptr;
    std::shared_ptr<string> backGroundImageUrl_ = nullptr;
    std::shared_ptr<int32_t> locate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
