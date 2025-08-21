// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHAVIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEHAVIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateHaVipResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHaVipResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HaVipIds, haVipIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHaVipResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HaVipIds, haVipIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateHaVipResponseBody() = default ;
    CreateHaVipResponseBody(const CreateHaVipResponseBody &) = default ;
    CreateHaVipResponseBody(CreateHaVipResponseBody &&) = default ;
    CreateHaVipResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHaVipResponseBody() = default ;
    CreateHaVipResponseBody& operator=(const CreateHaVipResponseBody &) = default ;
    CreateHaVipResponseBody& operator=(CreateHaVipResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->haVipIds_ != nullptr
        && this->requestId_ != nullptr; };
    // haVipIds Field Functions 
    bool hasHaVipIds() const { return this->haVipIds_ != nullptr;};
    void deleteHaVipIds() { this->haVipIds_ = nullptr;};
    inline const vector<string> & haVipIds() const { DARABONBA_PTR_GET_CONST(haVipIds_, vector<string>) };
    inline vector<string> haVipIds() { DARABONBA_PTR_GET(haVipIds_, vector<string>) };
    inline CreateHaVipResponseBody& setHaVipIds(const vector<string> & haVipIds) { DARABONBA_PTR_SET_VALUE(haVipIds_, haVipIds) };
    inline CreateHaVipResponseBody& setHaVipIds(vector<string> && haVipIds) { DARABONBA_PTR_SET_RVALUE(haVipIds_, haVipIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateHaVipResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<string>> haVipIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
