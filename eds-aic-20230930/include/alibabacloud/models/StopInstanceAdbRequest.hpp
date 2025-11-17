// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPINSTANCEADBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPINSTANCEADBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class StopInstanceAdbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopInstanceAdbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, StopInstanceAdbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
    };
    StopInstanceAdbRequest() = default ;
    StopInstanceAdbRequest(const StopInstanceAdbRequest &) = default ;
    StopInstanceAdbRequest(StopInstanceAdbRequest &&) = default ;
    StopInstanceAdbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopInstanceAdbRequest() = default ;
    StopInstanceAdbRequest& operator=(const StopInstanceAdbRequest &) = default ;
    StopInstanceAdbRequest& operator=(StopInstanceAdbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline StopInstanceAdbRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline StopInstanceAdbRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
