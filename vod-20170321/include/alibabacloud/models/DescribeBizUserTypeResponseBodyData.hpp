// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBIZUSERTYPERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBIZUSERTYPERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeBizUserTypeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBizUserTypeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBizUserTypeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeBizUserTypeResponseBodyData() = default ;
    DescribeBizUserTypeResponseBodyData(const DescribeBizUserTypeResponseBodyData &) = default ;
    DescribeBizUserTypeResponseBodyData(DescribeBizUserTypeResponseBodyData &&) = default ;
    DescribeBizUserTypeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBizUserTypeResponseBodyData() = default ;
    DescribeBizUserTypeResponseBodyData& operator=(const DescribeBizUserTypeResponseBodyData &) = default ;
    DescribeBizUserTypeResponseBodyData& operator=(DescribeBizUserTypeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeBizUserTypeResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
