// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBOTPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBOTPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeBotPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBotPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BotInstanceLevel, botInstanceLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBotPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BotInstanceLevel, botInstanceLevel_);
    };
    DescribeBotPriceRequest() = default ;
    DescribeBotPriceRequest(const DescribeBotPriceRequest &) = default ;
    DescribeBotPriceRequest(DescribeBotPriceRequest &&) = default ;
    DescribeBotPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBotPriceRequest() = default ;
    DescribeBotPriceRequest& operator=(const DescribeBotPriceRequest &) = default ;
    DescribeBotPriceRequest& operator=(DescribeBotPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->botInstanceLevel_ == nullptr; };
    // botInstanceLevel Field Functions 
    bool hasBotInstanceLevel() const { return this->botInstanceLevel_ != nullptr;};
    void deleteBotInstanceLevel() { this->botInstanceLevel_ = nullptr;};
    inline string getBotInstanceLevel() const { DARABONBA_PTR_GET_DEFAULT(botInstanceLevel_, "") };
    inline DescribeBotPriceRequest& setBotInstanceLevel(string botInstanceLevel) { DARABONBA_PTR_SET_VALUE(botInstanceLevel_, botInstanceLevel) };


  protected:
    // The bot instance type.
    // 
    // This parameter is required.
    shared_ptr<string> botInstanceLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
