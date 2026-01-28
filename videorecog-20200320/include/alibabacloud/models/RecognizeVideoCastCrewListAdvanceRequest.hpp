// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class RecognizeVideoCastCrewListAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCastCrewListAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Params, params_);
      // videoUrlObject_ is stream
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCastCrewListAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Params, params_);
      // videoUrlObject_ is stream
    };
    RecognizeVideoCastCrewListAdvanceRequest() = default ;
    RecognizeVideoCastCrewListAdvanceRequest(const RecognizeVideoCastCrewListAdvanceRequest &) = default ;
    RecognizeVideoCastCrewListAdvanceRequest(RecognizeVideoCastCrewListAdvanceRequest &&) = default ;
    RecognizeVideoCastCrewListAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCastCrewListAdvanceRequest() = default ;
    RecognizeVideoCastCrewListAdvanceRequest& operator=(const RecognizeVideoCastCrewListAdvanceRequest &) = default ;
    RecognizeVideoCastCrewListAdvanceRequest& operator=(RecognizeVideoCastCrewListAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Params() = default ;
      Params(const Params &) = default ;
      Params(Params &&) = default ;
      Params(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Params() = default ;
      Params& operator=(const Params &) = default ;
      Params& operator=(Params &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Params& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->params_ == nullptr
        && this->videoUrlObject_ == nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<RecognizeVideoCastCrewListAdvanceRequest::Params> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<RecognizeVideoCastCrewListAdvanceRequest::Params>) };
    inline vector<RecognizeVideoCastCrewListAdvanceRequest::Params> getParams() { DARABONBA_PTR_GET(params_, vector<RecognizeVideoCastCrewListAdvanceRequest::Params>) };
    inline RecognizeVideoCastCrewListAdvanceRequest& setParams(const vector<RecognizeVideoCastCrewListAdvanceRequest::Params> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline RecognizeVideoCastCrewListAdvanceRequest& setParams(vector<RecognizeVideoCastCrewListAdvanceRequest::Params> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // videoUrlObject Field Functions 
    bool hasVideoUrlObject() const { return this->videoUrlObject_ != nullptr;};
    void deleteVideoUrlObject() { this->videoUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getVideoUrlObject() const { DARABONBA_GET(videoUrlObject_) };
    inline RecognizeVideoCastCrewListAdvanceRequest& setVideoUrlObject(shared_ptr<Darabonba::IStream> videoUrlObject) { DARABONBA_SET_VALUE(videoUrlObject_, videoUrlObject) };


  protected:
    shared_ptr<vector<RecognizeVideoCastCrewListAdvanceRequest::Params>> params_ {};
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoUrlObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
