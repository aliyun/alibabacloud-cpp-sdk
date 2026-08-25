// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMRESOURCESTATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMRESOURCESTATSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class GetCustomResourceStatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomResourceStatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MainBizType, mainBizType_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomResourceStatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MainBizType, mainBizType_);
    };
    GetCustomResourceStatsRequest() = default ;
    GetCustomResourceStatsRequest(const GetCustomResourceStatsRequest &) = default ;
    GetCustomResourceStatsRequest(GetCustomResourceStatsRequest &&) = default ;
    GetCustomResourceStatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomResourceStatsRequest() = default ;
    GetCustomResourceStatsRequest& operator=(const GetCustomResourceStatsRequest &) = default ;
    GetCustomResourceStatsRequest& operator=(GetCustomResourceStatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mainBizType_ == nullptr; };
    // mainBizType Field Functions 
    bool hasMainBizType() const { return this->mainBizType_ != nullptr;};
    void deleteMainBizType() { this->mainBizType_ = nullptr;};
    inline string getMainBizType() const { DARABONBA_PTR_GET_DEFAULT(mainBizType_, "") };
    inline GetCustomResourceStatsRequest& setMainBizType(string mainBizType) { DARABONBA_PTR_SET_VALUE(mainBizType_, mainBizType) };


  protected:
    // The business type. Default value: enterprise.
    shared_ptr<string> mainBizType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
