// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ESTIMATEDLOGSTASHRESTARTTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ESTIMATEDLOGSTASHRESTARTTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class EstimatedLogstashRestartTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EstimatedLogstashRestartTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(force, force_);
    };
    friend void from_json(const Darabonba::Json& j, EstimatedLogstashRestartTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(force, force_);
    };
    EstimatedLogstashRestartTimeRequest() = default ;
    EstimatedLogstashRestartTimeRequest(const EstimatedLogstashRestartTimeRequest &) = default ;
    EstimatedLogstashRestartTimeRequest(EstimatedLogstashRestartTimeRequest &&) = default ;
    EstimatedLogstashRestartTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EstimatedLogstashRestartTimeRequest() = default ;
    EstimatedLogstashRestartTimeRequest& operator=(const EstimatedLogstashRestartTimeRequest &) = default ;
    EstimatedLogstashRestartTimeRequest& operator=(EstimatedLogstashRestartTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && this->force_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline EstimatedLogstashRestartTimeRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline EstimatedLogstashRestartTimeRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    shared_ptr<string> body_ {};
    // Specifies whether to forcibly restart the cluster. Default value: false.
    shared_ptr<bool> force_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
