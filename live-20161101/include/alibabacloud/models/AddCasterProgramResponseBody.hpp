// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTERPROGRAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTERPROGRAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterProgramResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterProgramResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EpisodeIds, episodeIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterProgramResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EpisodeIds, episodeIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddCasterProgramResponseBody() = default ;
    AddCasterProgramResponseBody(const AddCasterProgramResponseBody &) = default ;
    AddCasterProgramResponseBody(AddCasterProgramResponseBody &&) = default ;
    AddCasterProgramResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterProgramResponseBody() = default ;
    AddCasterProgramResponseBody& operator=(const AddCasterProgramResponseBody &) = default ;
    AddCasterProgramResponseBody& operator=(AddCasterProgramResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EpisodeIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EpisodeIds& obj) { 
        DARABONBA_PTR_TO_JSON(EpisodeId, episodeId_);
      };
      friend void from_json(const Darabonba::Json& j, EpisodeIds& obj) { 
        DARABONBA_PTR_FROM_JSON(EpisodeId, episodeId_);
      };
      EpisodeIds() = default ;
      EpisodeIds(const EpisodeIds &) = default ;
      EpisodeIds(EpisodeIds &&) = default ;
      EpisodeIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EpisodeIds() = default ;
      EpisodeIds& operator=(const EpisodeIds &) = default ;
      EpisodeIds& operator=(EpisodeIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EpisodeId : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EpisodeId& obj) { 
          DARABONBA_PTR_TO_JSON(EpisodeId, episodeId_);
        };
        friend void from_json(const Darabonba::Json& j, EpisodeId& obj) { 
          DARABONBA_PTR_FROM_JSON(EpisodeId, episodeId_);
        };
        EpisodeId() = default ;
        EpisodeId(const EpisodeId &) = default ;
        EpisodeId(EpisodeId &&) = default ;
        EpisodeId(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EpisodeId() = default ;
        EpisodeId& operator=(const EpisodeId &) = default ;
        EpisodeId& operator=(EpisodeId &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->episodeId_ == nullptr; };
        // episodeId Field Functions 
        bool hasEpisodeId() const { return this->episodeId_ != nullptr;};
        void deleteEpisodeId() { this->episodeId_ = nullptr;};
        inline string getEpisodeId() const { DARABONBA_PTR_GET_DEFAULT(episodeId_, "") };
        inline EpisodeId& setEpisodeId(string episodeId) { DARABONBA_PTR_SET_VALUE(episodeId_, episodeId) };


      protected:
        shared_ptr<string> episodeId_ {};
      };

      virtual bool empty() const override { return this->episodeId_ == nullptr; };
      // episodeId Field Functions 
      bool hasEpisodeId() const { return this->episodeId_ != nullptr;};
      void deleteEpisodeId() { this->episodeId_ = nullptr;};
      inline const vector<EpisodeIds::EpisodeId> & getEpisodeId() const { DARABONBA_PTR_GET_CONST(episodeId_, vector<EpisodeIds::EpisodeId>) };
      inline vector<EpisodeIds::EpisodeId> getEpisodeId() { DARABONBA_PTR_GET(episodeId_, vector<EpisodeIds::EpisodeId>) };
      inline EpisodeIds& setEpisodeId(const vector<EpisodeIds::EpisodeId> & episodeId) { DARABONBA_PTR_SET_VALUE(episodeId_, episodeId) };
      inline EpisodeIds& setEpisodeId(vector<EpisodeIds::EpisodeId> && episodeId) { DARABONBA_PTR_SET_RVALUE(episodeId_, episodeId) };


    protected:
      shared_ptr<vector<EpisodeIds::EpisodeId>> episodeId_ {};
    };

    virtual bool empty() const override { return this->episodeIds_ == nullptr
        && this->requestId_ == nullptr; };
    // episodeIds Field Functions 
    bool hasEpisodeIds() const { return this->episodeIds_ != nullptr;};
    void deleteEpisodeIds() { this->episodeIds_ = nullptr;};
    inline const AddCasterProgramResponseBody::EpisodeIds & getEpisodeIds() const { DARABONBA_PTR_GET_CONST(episodeIds_, AddCasterProgramResponseBody::EpisodeIds) };
    inline AddCasterProgramResponseBody::EpisodeIds getEpisodeIds() { DARABONBA_PTR_GET(episodeIds_, AddCasterProgramResponseBody::EpisodeIds) };
    inline AddCasterProgramResponseBody& setEpisodeIds(const AddCasterProgramResponseBody::EpisodeIds & episodeIds) { DARABONBA_PTR_SET_VALUE(episodeIds_, episodeIds) };
    inline AddCasterProgramResponseBody& setEpisodeIds(AddCasterProgramResponseBody::EpisodeIds && episodeIds) { DARABONBA_PTR_SET_RVALUE(episodeIds_, episodeIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddCasterProgramResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<AddCasterProgramResponseBody::EpisodeIds> episodeIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
