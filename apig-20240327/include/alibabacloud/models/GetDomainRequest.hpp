// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(withStatistics, withStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, GetDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(withStatistics, withStatistics_);
    };
    GetDomainRequest() = default ;
    GetDomainRequest(const GetDomainRequest &) = default ;
    GetDomainRequest(GetDomainRequest &&) = default ;
    GetDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDomainRequest() = default ;
    GetDomainRequest& operator=(const GetDomainRequest &) = default ;
    GetDomainRequest& operator=(GetDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->withStatistics_ != nullptr; };
    // withStatistics Field Functions 
    bool hasWithStatistics() const { return this->withStatistics_ != nullptr;};
    void deleteWithStatistics() { this->withStatistics_ = nullptr;};
    inline bool withStatistics() const { DARABONBA_PTR_GET_DEFAULT(withStatistics_, false) };
    inline GetDomainRequest& setWithStatistics(bool withStatistics) { DARABONBA_PTR_SET_VALUE(withStatistics_, withStatistics) };


  protected:
    // Specifies whether to return online resource information.
    std::shared_ptr<bool> withStatistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
