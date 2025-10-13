// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELCOORDINATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELCOORDINATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Metaspace20221014
{
namespace Models
{
  class CancelCoordinationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelCoordinationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CoIds, coIds_);
    };
    friend void from_json(const Darabonba::Json& j, CancelCoordinationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CoIds, coIds_);
    };
    CancelCoordinationRequest() = default ;
    CancelCoordinationRequest(const CancelCoordinationRequest &) = default ;
    CancelCoordinationRequest(CancelCoordinationRequest &&) = default ;
    CancelCoordinationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelCoordinationRequest() = default ;
    CancelCoordinationRequest& operator=(const CancelCoordinationRequest &) = default ;
    CancelCoordinationRequest& operator=(CancelCoordinationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coIds_ != nullptr; };
    // coIds Field Functions 
    bool hasCoIds() const { return this->coIds_ != nullptr;};
    void deleteCoIds() { this->coIds_ = nullptr;};
    inline const vector<string> & coIds() const { DARABONBA_PTR_GET_CONST(coIds_, vector<string>) };
    inline vector<string> coIds() { DARABONBA_PTR_GET(coIds_, vector<string>) };
    inline CancelCoordinationRequest& setCoIds(const vector<string> & coIds) { DARABONBA_PTR_SET_VALUE(coIds_, coIds) };
    inline CancelCoordinationRequest& setCoIds(vector<string> && coIds) { DARABONBA_PTR_SET_RVALUE(coIds_, coIds) };


  protected:
    std::shared_ptr<vector<string>> coIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Metaspace20221014
#endif
