// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYDISYNCTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYDISYNCTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeployDISyncTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployDISyncTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DeployDISyncTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DeployDISyncTaskResponseBodyData() = default ;
    DeployDISyncTaskResponseBodyData(const DeployDISyncTaskResponseBodyData &) = default ;
    DeployDISyncTaskResponseBodyData(DeployDISyncTaskResponseBodyData &&) = default ;
    DeployDISyncTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployDISyncTaskResponseBodyData() = default ;
    DeployDISyncTaskResponseBodyData& operator=(const DeployDISyncTaskResponseBodyData &) = default ;
    DeployDISyncTaskResponseBodyData& operator=(DeployDISyncTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->status_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeployDISyncTaskResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DeployDISyncTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The reason for the failure to publish a data integration synchronization task.
    // 
    // If the data integration synchronization task is published successfully, the return value of this parameter is empty.
    std::shared_ptr<string> message_ = nullptr;
    // The cause of the failure to deploy the real-time synchronization node or data synchronization solution.
    // 
    // If the real-time synchronization node or data synchronization solution is deployed, the value null is returned.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
