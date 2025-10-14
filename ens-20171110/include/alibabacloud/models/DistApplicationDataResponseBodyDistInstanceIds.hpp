// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISTAPPLICATIONDATARESPONSEBODYDISTINSTANCEIDS_HPP_
#define ALIBABACLOUD_MODELS_DISTAPPLICATIONDATARESPONSEBODYDISTINSTANCEIDS_HPP_
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
  class DistApplicationDataResponseBodyDistInstanceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DistApplicationDataResponseBodyDistInstanceIds& obj) { 
      DARABONBA_PTR_TO_JSON(DistInstanceId, distInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DistApplicationDataResponseBodyDistInstanceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(DistInstanceId, distInstanceId_);
    };
    DistApplicationDataResponseBodyDistInstanceIds() = default ;
    DistApplicationDataResponseBodyDistInstanceIds(const DistApplicationDataResponseBodyDistInstanceIds &) = default ;
    DistApplicationDataResponseBodyDistInstanceIds(DistApplicationDataResponseBodyDistInstanceIds &&) = default ;
    DistApplicationDataResponseBodyDistInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DistApplicationDataResponseBodyDistInstanceIds() = default ;
    DistApplicationDataResponseBodyDistInstanceIds& operator=(const DistApplicationDataResponseBodyDistInstanceIds &) = default ;
    DistApplicationDataResponseBodyDistInstanceIds& operator=(DistApplicationDataResponseBodyDistInstanceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->distInstanceId_ == nullptr; };
    // distInstanceId Field Functions 
    bool hasDistInstanceId() const { return this->distInstanceId_ != nullptr;};
    void deleteDistInstanceId() { this->distInstanceId_ = nullptr;};
    inline const vector<string> & distInstanceId() const { DARABONBA_PTR_GET_CONST(distInstanceId_, vector<string>) };
    inline vector<string> distInstanceId() { DARABONBA_PTR_GET(distInstanceId_, vector<string>) };
    inline DistApplicationDataResponseBodyDistInstanceIds& setDistInstanceId(const vector<string> & distInstanceId) { DARABONBA_PTR_SET_VALUE(distInstanceId_, distInstanceId) };
    inline DistApplicationDataResponseBodyDistInstanceIds& setDistInstanceId(vector<string> && distInstanceId) { DARABONBA_PTR_SET_RVALUE(distInstanceId_, distInstanceId) };


  protected:
    std::shared_ptr<vector<string>> distInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
