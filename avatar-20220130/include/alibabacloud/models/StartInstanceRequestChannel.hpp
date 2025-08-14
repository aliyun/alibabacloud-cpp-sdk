// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCEREQUESTCHANNEL_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCEREQUESTCHANNEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class StartInstanceRequestChannel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartInstanceRequestChannel& obj) { 
      DARABONBA_ANY_TO_JSON(ReqConfig, reqConfig_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstanceRequestChannel& obj) { 
      DARABONBA_ANY_FROM_JSON(ReqConfig, reqConfig_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    StartInstanceRequestChannel() = default ;
    StartInstanceRequestChannel(const StartInstanceRequestChannel &) = default ;
    StartInstanceRequestChannel(StartInstanceRequestChannel &&) = default ;
    StartInstanceRequestChannel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartInstanceRequestChannel() = default ;
    StartInstanceRequestChannel& operator=(const StartInstanceRequestChannel &) = default ;
    StartInstanceRequestChannel& operator=(StartInstanceRequestChannel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reqConfig_ != nullptr
        && this->type_ != nullptr; };
    // reqConfig Field Functions 
    bool hasReqConfig() const { return this->reqConfig_ != nullptr;};
    void deleteReqConfig() { this->reqConfig_ = nullptr;};
    inline     const Darabonba::Json & reqConfig() const { DARABONBA_GET(reqConfig_) };
    Darabonba::Json & reqConfig() { DARABONBA_GET(reqConfig_) };
    inline StartInstanceRequestChannel& setReqConfig(const Darabonba::Json & reqConfig) { DARABONBA_SET_VALUE(reqConfig_, reqConfig) };
    inline StartInstanceRequestChannel& setReqConfig(Darabonba::Json & reqConfig) { DARABONBA_SET_RVALUE(reqConfig_, reqConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline StartInstanceRequestChannel& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    Darabonba::Json reqConfig_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
