// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEVELOPSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEVELOPSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DevelopServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DevelopServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Exit, exit_);
    };
    friend void from_json(const Darabonba::Json& j, DevelopServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Exit, exit_);
    };
    DevelopServiceRequest() = default ;
    DevelopServiceRequest(const DevelopServiceRequest &) = default ;
    DevelopServiceRequest(DevelopServiceRequest &&) = default ;
    DevelopServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DevelopServiceRequest() = default ;
    DevelopServiceRequest& operator=(const DevelopServiceRequest &) = default ;
    DevelopServiceRequest& operator=(DevelopServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exit_ == nullptr; };
    // exit Field Functions 
    bool hasExit() const { return this->exit_ != nullptr;};
    void deleteExit() { this->exit_ = nullptr;};
    inline string getExit() const { DARABONBA_PTR_GET_DEFAULT(exit_, "") };
    inline DevelopServiceRequest& setExit(string exit) { DARABONBA_PTR_SET_VALUE(exit_, exit) };


  protected:
    // Specifies whether to exit development mode. Valid values:
    // 
    // *   true: exits development mode.
    // *   false (default): enters development mode.
    shared_ptr<string> exit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
