// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTSGRANTSTATUSRESPONSEBODYSTSGRANT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTSGRANTSTATUSRESPONSEBODYSTSGRANT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeStsGrantStatusResponseBodyStsGrant : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStsGrantStatusResponseBodyStsGrant& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStsGrantStatusResponseBodyStsGrant& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeStsGrantStatusResponseBodyStsGrant() = default ;
    DescribeStsGrantStatusResponseBodyStsGrant(const DescribeStsGrantStatusResponseBodyStsGrant &) = default ;
    DescribeStsGrantStatusResponseBodyStsGrant(DescribeStsGrantStatusResponseBodyStsGrant &&) = default ;
    DescribeStsGrantStatusResponseBodyStsGrant(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStsGrantStatusResponseBodyStsGrant() = default ;
    DescribeStsGrantStatusResponseBodyStsGrant& operator=(const DescribeStsGrantStatusResponseBodyStsGrant &) = default ;
    DescribeStsGrantStatusResponseBodyStsGrant& operator=(DescribeStsGrantStatusResponseBodyStsGrant &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeStsGrantStatusResponseBodyStsGrant& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The authorization status. Valid values:
    // 
    // *   **0**: Anti-DDoS Pro or Anti-DDoS Premium is not authorized to access other cloud services.
    // *   **1**: Anti-DDoS Pro or Anti-DDoS Premium is authorized to access other cloud services.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
