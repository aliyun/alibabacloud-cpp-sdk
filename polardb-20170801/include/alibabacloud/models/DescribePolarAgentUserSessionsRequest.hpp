// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARAGENTUSERSESSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARAGENTUSERSESSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarAgentUserSessionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarAgentUserSessionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarAgentUserSessionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribePolarAgentUserSessionsRequest() = default ;
    DescribePolarAgentUserSessionsRequest(const DescribePolarAgentUserSessionsRequest &) = default ;
    DescribePolarAgentUserSessionsRequest(DescribePolarAgentUserSessionsRequest &&) = default ;
    DescribePolarAgentUserSessionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarAgentUserSessionsRequest() = default ;
    DescribePolarAgentUserSessionsRequest& operator=(const DescribePolarAgentUserSessionsRequest &) = default ;
    DescribePolarAgentUserSessionsRequest& operator=(DescribePolarAgentUserSessionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->source_ == nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribePolarAgentUserSessionsRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
