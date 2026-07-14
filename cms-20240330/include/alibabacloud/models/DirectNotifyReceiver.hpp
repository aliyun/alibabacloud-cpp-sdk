// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIRECTNOTIFYRECEIVER_HPP_
#define ALIBABACLOUD_MODELS_DIRECTNOTIFYRECEIVER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DirectNotifyReceiver : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DirectNotifyReceiver& obj) { 
      DARABONBA_PTR_TO_JSON(channels, channels_);
      DARABONBA_PTR_TO_JSON(identifiers, identifiers_);
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, DirectNotifyReceiver& obj) { 
      DARABONBA_PTR_FROM_JSON(channels, channels_);
      DARABONBA_PTR_FROM_JSON(identifiers, identifiers_);
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
    };
    DirectNotifyReceiver() = default ;
    DirectNotifyReceiver(const DirectNotifyReceiver &) = default ;
    DirectNotifyReceiver(DirectNotifyReceiver &&) = default ;
    DirectNotifyReceiver(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DirectNotifyReceiver() = default ;
    DirectNotifyReceiver& operator=(const DirectNotifyReceiver &) = default ;
    DirectNotifyReceiver& operator=(DirectNotifyReceiver &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channels_ == nullptr
        && this->identifiers_ == nullptr && this->targetType_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<string> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<string>) };
    inline vector<string> getChannels() { DARABONBA_PTR_GET(channels_, vector<string>) };
    inline DirectNotifyReceiver& setChannels(const vector<string> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline DirectNotifyReceiver& setChannels(vector<string> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // identifiers Field Functions 
    bool hasIdentifiers() const { return this->identifiers_ != nullptr;};
    void deleteIdentifiers() { this->identifiers_ = nullptr;};
    inline const vector<string> & getIdentifiers() const { DARABONBA_PTR_GET_CONST(identifiers_, vector<string>) };
    inline vector<string> getIdentifiers() { DARABONBA_PTR_GET(identifiers_, vector<string>) };
    inline DirectNotifyReceiver& setIdentifiers(const vector<string> & identifiers) { DARABONBA_PTR_SET_VALUE(identifiers_, identifiers) };
    inline DirectNotifyReceiver& setIdentifiers(vector<string> && identifiers) { DARABONBA_PTR_SET_RVALUE(identifiers_, identifiers) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DirectNotifyReceiver& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    shared_ptr<vector<string>> channels_ {};
    shared_ptr<vector<string>> identifiers_ {};
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
