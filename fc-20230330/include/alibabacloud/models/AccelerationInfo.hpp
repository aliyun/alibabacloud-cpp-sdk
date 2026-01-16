// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCELERATIONINFO_HPP_
#define ALIBABACLOUD_MODELS_ACCELERATIONINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class AccelerationInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AccelerationInfo& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, AccelerationInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    AccelerationInfo() = default ;
    AccelerationInfo(const AccelerationInfo &) = default ;
    AccelerationInfo(AccelerationInfo &&) = default ;
    AccelerationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AccelerationInfo() = default ;
    AccelerationInfo& operator=(const AccelerationInfo &) = default ;
    AccelerationInfo& operator=(AccelerationInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AccelerationInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
