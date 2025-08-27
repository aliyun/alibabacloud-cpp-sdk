// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIRPORTSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AIRPORTSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AirportSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AirportSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AirportSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AirportSearchRequest() = default ;
    AirportSearchRequest(const AirportSearchRequest &) = default ;
    AirportSearchRequest(AirportSearchRequest &&) = default ;
    AirportSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AirportSearchRequest() = default ;
    AirportSearchRequest& operator=(const AirportSearchRequest &) = default ;
    AirportSearchRequest& operator=(AirportSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyword_ != nullptr
        && this->type_ != nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline AirportSearchRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline AirportSearchRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
