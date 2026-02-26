// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGISTICSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_LOGISTICSDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class LogisticsDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LogisticsDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ocurrTimeStr, ocurrTimeStr_);
      DARABONBA_PTR_TO_JSON(standerdDesc, standerdDesc_);
    };
    friend void from_json(const Darabonba::Json& j, LogisticsDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ocurrTimeStr, ocurrTimeStr_);
      DARABONBA_PTR_FROM_JSON(standerdDesc, standerdDesc_);
    };
    LogisticsDetail() = default ;
    LogisticsDetail(const LogisticsDetail &) = default ;
    LogisticsDetail(LogisticsDetail &&) = default ;
    LogisticsDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LogisticsDetail() = default ;
    LogisticsDetail& operator=(const LogisticsDetail &) = default ;
    LogisticsDetail& operator=(LogisticsDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ocurrTimeStr_ == nullptr
        && this->standerdDesc_ == nullptr; };
    // ocurrTimeStr Field Functions 
    bool hasOcurrTimeStr() const { return this->ocurrTimeStr_ != nullptr;};
    void deleteOcurrTimeStr() { this->ocurrTimeStr_ = nullptr;};
    inline string getOcurrTimeStr() const { DARABONBA_PTR_GET_DEFAULT(ocurrTimeStr_, "") };
    inline LogisticsDetail& setOcurrTimeStr(string ocurrTimeStr) { DARABONBA_PTR_SET_VALUE(ocurrTimeStr_, ocurrTimeStr) };


    // standerdDesc Field Functions 
    bool hasStanderdDesc() const { return this->standerdDesc_ != nullptr;};
    void deleteStanderdDesc() { this->standerdDesc_ = nullptr;};
    inline string getStanderdDesc() const { DARABONBA_PTR_GET_DEFAULT(standerdDesc_, "") };
    inline LogisticsDetail& setStanderdDesc(string standerdDesc) { DARABONBA_PTR_SET_VALUE(standerdDesc_, standerdDesc) };


  protected:
    shared_ptr<string> ocurrTimeStr_ {};
    shared_ptr<string> standerdDesc_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
