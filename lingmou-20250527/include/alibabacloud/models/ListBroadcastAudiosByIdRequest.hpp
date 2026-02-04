// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBROADCASTAUDIOSBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBROADCASTAUDIOSBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class ListBroadcastAudiosByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBroadcastAudiosByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(audioIds, audioIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListBroadcastAudiosByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(audioIds, audioIds_);
    };
    ListBroadcastAudiosByIdRequest() = default ;
    ListBroadcastAudiosByIdRequest(const ListBroadcastAudiosByIdRequest &) = default ;
    ListBroadcastAudiosByIdRequest(ListBroadcastAudiosByIdRequest &&) = default ;
    ListBroadcastAudiosByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBroadcastAudiosByIdRequest() = default ;
    ListBroadcastAudiosByIdRequest& operator=(const ListBroadcastAudiosByIdRequest &) = default ;
    ListBroadcastAudiosByIdRequest& operator=(ListBroadcastAudiosByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioIds_ == nullptr; };
    // audioIds Field Functions 
    bool hasAudioIds() const { return this->audioIds_ != nullptr;};
    void deleteAudioIds() { this->audioIds_ = nullptr;};
    inline const vector<string> & getAudioIds() const { DARABONBA_PTR_GET_CONST(audioIds_, vector<string>) };
    inline vector<string> getAudioIds() { DARABONBA_PTR_GET(audioIds_, vector<string>) };
    inline ListBroadcastAudiosByIdRequest& setAudioIds(const vector<string> & audioIds) { DARABONBA_PTR_SET_VALUE(audioIds_, audioIds) };
    inline ListBroadcastAudiosByIdRequest& setAudioIds(vector<string> && audioIds) { DARABONBA_PTR_SET_RVALUE(audioIds_, audioIds) };


  protected:
    shared_ptr<vector<string>> audioIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
