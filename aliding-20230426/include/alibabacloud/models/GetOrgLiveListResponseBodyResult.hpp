// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGLIVELISTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETORGLIVELISTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOrgLiveListResponseBodyResultNewLive.hpp>
#include <alibabacloud/models/GetOrgLiveListResponseBodyResultUpdateLive.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetOrgLiveListResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrgLiveListResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(NewLive, newLive_);
      DARABONBA_PTR_TO_JSON(UpdateLive, updateLive_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrgLiveListResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(NewLive, newLive_);
      DARABONBA_PTR_FROM_JSON(UpdateLive, updateLive_);
    };
    GetOrgLiveListResponseBodyResult() = default ;
    GetOrgLiveListResponseBodyResult(const GetOrgLiveListResponseBodyResult &) = default ;
    GetOrgLiveListResponseBodyResult(GetOrgLiveListResponseBodyResult &&) = default ;
    GetOrgLiveListResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrgLiveListResponseBodyResult() = default ;
    GetOrgLiveListResponseBodyResult& operator=(const GetOrgLiveListResponseBodyResult &) = default ;
    GetOrgLiveListResponseBodyResult& operator=(GetOrgLiveListResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->newLive_ != nullptr
        && this->updateLive_ != nullptr; };
    // newLive Field Functions 
    bool hasNewLive() const { return this->newLive_ != nullptr;};
    void deleteNewLive() { this->newLive_ = nullptr;};
    inline const Models::GetOrgLiveListResponseBodyResultNewLive & newLive() const { DARABONBA_PTR_GET_CONST(newLive_, Models::GetOrgLiveListResponseBodyResultNewLive) };
    inline Models::GetOrgLiveListResponseBodyResultNewLive newLive() { DARABONBA_PTR_GET(newLive_, Models::GetOrgLiveListResponseBodyResultNewLive) };
    inline GetOrgLiveListResponseBodyResult& setNewLive(const Models::GetOrgLiveListResponseBodyResultNewLive & newLive) { DARABONBA_PTR_SET_VALUE(newLive_, newLive) };
    inline GetOrgLiveListResponseBodyResult& setNewLive(Models::GetOrgLiveListResponseBodyResultNewLive && newLive) { DARABONBA_PTR_SET_RVALUE(newLive_, newLive) };


    // updateLive Field Functions 
    bool hasUpdateLive() const { return this->updateLive_ != nullptr;};
    void deleteUpdateLive() { this->updateLive_ = nullptr;};
    inline const Models::GetOrgLiveListResponseBodyResultUpdateLive & updateLive() const { DARABONBA_PTR_GET_CONST(updateLive_, Models::GetOrgLiveListResponseBodyResultUpdateLive) };
    inline Models::GetOrgLiveListResponseBodyResultUpdateLive updateLive() { DARABONBA_PTR_GET(updateLive_, Models::GetOrgLiveListResponseBodyResultUpdateLive) };
    inline GetOrgLiveListResponseBodyResult& setUpdateLive(const Models::GetOrgLiveListResponseBodyResultUpdateLive & updateLive) { DARABONBA_PTR_SET_VALUE(updateLive_, updateLive) };
    inline GetOrgLiveListResponseBodyResult& setUpdateLive(Models::GetOrgLiveListResponseBodyResultUpdateLive && updateLive) { DARABONBA_PTR_SET_RVALUE(updateLive_, updateLive) };


  protected:
    std::shared_ptr<Models::GetOrgLiveListResponseBodyResultNewLive> newLive_ = nullptr;
    std::shared_ptr<Models::GetOrgLiveListResponseBodyResultUpdateLive> updateLive_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
