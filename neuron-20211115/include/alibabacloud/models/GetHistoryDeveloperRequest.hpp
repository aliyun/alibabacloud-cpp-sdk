// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHISTORYDEVELOPERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHISTORYDEVELOPERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class GetHistoryDeveloperRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHistoryDeveloperRequest& obj) { 
      DARABONBA_PTR_TO_JSON(enterpriseId, enterpriseId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHistoryDeveloperRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(enterpriseId, enterpriseId_);
    };
    GetHistoryDeveloperRequest() = default ;
    GetHistoryDeveloperRequest(const GetHistoryDeveloperRequest &) = default ;
    GetHistoryDeveloperRequest(GetHistoryDeveloperRequest &&) = default ;
    GetHistoryDeveloperRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHistoryDeveloperRequest() = default ;
    GetHistoryDeveloperRequest& operator=(const GetHistoryDeveloperRequest &) = default ;
    GetHistoryDeveloperRequest& operator=(GetHistoryDeveloperRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enterpriseId_ == nullptr; };
    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline GetHistoryDeveloperRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


  protected:
    shared_ptr<int64_t> enterpriseId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
