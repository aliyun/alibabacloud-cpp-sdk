// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CITYSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CITYSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CitySearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CitySearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
    };
    friend void from_json(const Darabonba::Json& j, CitySearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
    };
    CitySearchRequest() = default ;
    CitySearchRequest(const CitySearchRequest &) = default ;
    CitySearchRequest(CitySearchRequest &&) = default ;
    CitySearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CitySearchRequest() = default ;
    CitySearchRequest& operator=(const CitySearchRequest &) = default ;
    CitySearchRequest& operator=(CitySearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyword_ != nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline CitySearchRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> keyword_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
