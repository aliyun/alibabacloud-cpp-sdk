// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCASTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTCASTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartCasterResponseBodyPgmSceneInfos.hpp>
#include <alibabacloud/models/StartCasterResponseBodyPvwSceneInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartCasterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCasterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PgmSceneInfos, pgmSceneInfos_);
      DARABONBA_PTR_TO_JSON(PvwSceneInfos, pvwSceneInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartCasterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PgmSceneInfos, pgmSceneInfos_);
      DARABONBA_PTR_FROM_JSON(PvwSceneInfos, pvwSceneInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartCasterResponseBody() = default ;
    StartCasterResponseBody(const StartCasterResponseBody &) = default ;
    StartCasterResponseBody(StartCasterResponseBody &&) = default ;
    StartCasterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCasterResponseBody() = default ;
    StartCasterResponseBody& operator=(const StartCasterResponseBody &) = default ;
    StartCasterResponseBody& operator=(StartCasterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pgmSceneInfos_ == nullptr
        && return this->pvwSceneInfos_ == nullptr && return this->requestId_ == nullptr; };
    // pgmSceneInfos Field Functions 
    bool hasPgmSceneInfos() const { return this->pgmSceneInfos_ != nullptr;};
    void deletePgmSceneInfos() { this->pgmSceneInfos_ = nullptr;};
    inline const StartCasterResponseBodyPgmSceneInfos & pgmSceneInfos() const { DARABONBA_PTR_GET_CONST(pgmSceneInfos_, StartCasterResponseBodyPgmSceneInfos) };
    inline StartCasterResponseBodyPgmSceneInfos pgmSceneInfos() { DARABONBA_PTR_GET(pgmSceneInfos_, StartCasterResponseBodyPgmSceneInfos) };
    inline StartCasterResponseBody& setPgmSceneInfos(const StartCasterResponseBodyPgmSceneInfos & pgmSceneInfos) { DARABONBA_PTR_SET_VALUE(pgmSceneInfos_, pgmSceneInfos) };
    inline StartCasterResponseBody& setPgmSceneInfos(StartCasterResponseBodyPgmSceneInfos && pgmSceneInfos) { DARABONBA_PTR_SET_RVALUE(pgmSceneInfos_, pgmSceneInfos) };


    // pvwSceneInfos Field Functions 
    bool hasPvwSceneInfos() const { return this->pvwSceneInfos_ != nullptr;};
    void deletePvwSceneInfos() { this->pvwSceneInfos_ = nullptr;};
    inline const StartCasterResponseBodyPvwSceneInfos & pvwSceneInfos() const { DARABONBA_PTR_GET_CONST(pvwSceneInfos_, StartCasterResponseBodyPvwSceneInfos) };
    inline StartCasterResponseBodyPvwSceneInfos pvwSceneInfos() { DARABONBA_PTR_GET(pvwSceneInfos_, StartCasterResponseBodyPvwSceneInfos) };
    inline StartCasterResponseBody& setPvwSceneInfos(const StartCasterResponseBodyPvwSceneInfos & pvwSceneInfos) { DARABONBA_PTR_SET_VALUE(pvwSceneInfos_, pvwSceneInfos) };
    inline StartCasterResponseBody& setPvwSceneInfos(StartCasterResponseBodyPvwSceneInfos && pvwSceneInfos) { DARABONBA_PTR_SET_RVALUE(pvwSceneInfos_, pvwSceneInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartCasterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The PGM scenes.
    std::shared_ptr<StartCasterResponseBodyPgmSceneInfos> pgmSceneInfos_ = nullptr;
    // The PVW scenes.
    std::shared_ptr<StartCasterResponseBodyPvwSceneInfos> pvwSceneInfos_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
