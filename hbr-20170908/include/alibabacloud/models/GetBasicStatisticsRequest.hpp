// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASICSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBASICSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class GetBasicStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBasicStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetBasicStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    GetBasicStatisticsRequest() = default ;
    GetBasicStatisticsRequest(const GetBasicStatisticsRequest &) = default ;
    GetBasicStatisticsRequest(GetBasicStatisticsRequest &&) = default ;
    GetBasicStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBasicStatisticsRequest() = default ;
    GetBasicStatisticsRequest& operator=(const GetBasicStatisticsRequest &) = default ;
    GetBasicStatisticsRequest& operator=(GetBasicStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceType_ == nullptr; };
    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetBasicStatisticsRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
