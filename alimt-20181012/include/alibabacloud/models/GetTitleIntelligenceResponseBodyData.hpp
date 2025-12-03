// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTITLEINTELLIGENCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTITLEINTELLIGENCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class GetTitleIntelligenceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTitleIntelligenceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Titles, titles_);
    };
    friend void from_json(const Darabonba::Json& j, GetTitleIntelligenceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Titles, titles_);
    };
    GetTitleIntelligenceResponseBodyData() = default ;
    GetTitleIntelligenceResponseBodyData(const GetTitleIntelligenceResponseBodyData &) = default ;
    GetTitleIntelligenceResponseBodyData(GetTitleIntelligenceResponseBodyData &&) = default ;
    GetTitleIntelligenceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTitleIntelligenceResponseBodyData() = default ;
    GetTitleIntelligenceResponseBodyData& operator=(const GetTitleIntelligenceResponseBodyData &) = default ;
    GetTitleIntelligenceResponseBodyData& operator=(GetTitleIntelligenceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->titles_ == nullptr; };
    // titles Field Functions 
    bool hasTitles() const { return this->titles_ != nullptr;};
    void deleteTitles() { this->titles_ = nullptr;};
    inline string titles() const { DARABONBA_PTR_GET_DEFAULT(titles_, "") };
    inline GetTitleIntelligenceResponseBodyData& setTitles(string titles) { DARABONBA_PTR_SET_VALUE(titles_, titles) };


  protected:
    std::shared_ptr<string> titles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
