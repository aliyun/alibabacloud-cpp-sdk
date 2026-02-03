// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTNISTRAFFICRANKINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTNISTRAFFICRANKINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class StartNisTrafficRankingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartNisTrafficRankingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NisTrafficRankingId, nisTrafficRankingId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartNisTrafficRankingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NisTrafficRankingId, nisTrafficRankingId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartNisTrafficRankingResponseBody() = default ;
    StartNisTrafficRankingResponseBody(const StartNisTrafficRankingResponseBody &) = default ;
    StartNisTrafficRankingResponseBody(StartNisTrafficRankingResponseBody &&) = default ;
    StartNisTrafficRankingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartNisTrafficRankingResponseBody() = default ;
    StartNisTrafficRankingResponseBody& operator=(const StartNisTrafficRankingResponseBody &) = default ;
    StartNisTrafficRankingResponseBody& operator=(StartNisTrafficRankingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nisTrafficRankingId_ == nullptr
        && this->requestId_ == nullptr; };
    // nisTrafficRankingId Field Functions 
    bool hasNisTrafficRankingId() const { return this->nisTrafficRankingId_ != nullptr;};
    void deleteNisTrafficRankingId() { this->nisTrafficRankingId_ = nullptr;};
    inline string getNisTrafficRankingId() const { DARABONBA_PTR_GET_DEFAULT(nisTrafficRankingId_, "") };
    inline StartNisTrafficRankingResponseBody& setNisTrafficRankingId(string nisTrafficRankingId) { DARABONBA_PTR_SET_VALUE(nisTrafficRankingId_, nisTrafficRankingId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartNisTrafficRankingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> nisTrafficRankingId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
