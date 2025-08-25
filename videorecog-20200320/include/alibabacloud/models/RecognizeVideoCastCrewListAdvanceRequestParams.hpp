// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTADVANCEREQUESTPARAMS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTADVANCEREQUESTPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class RecognizeVideoCastCrewListAdvanceRequestParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCastCrewListAdvanceRequestParams& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCastCrewListAdvanceRequestParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    RecognizeVideoCastCrewListAdvanceRequestParams() = default ;
    RecognizeVideoCastCrewListAdvanceRequestParams(const RecognizeVideoCastCrewListAdvanceRequestParams &) = default ;
    RecognizeVideoCastCrewListAdvanceRequestParams(RecognizeVideoCastCrewListAdvanceRequestParams &&) = default ;
    RecognizeVideoCastCrewListAdvanceRequestParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCastCrewListAdvanceRequestParams() = default ;
    RecognizeVideoCastCrewListAdvanceRequestParams& operator=(const RecognizeVideoCastCrewListAdvanceRequestParams &) = default ;
    RecognizeVideoCastCrewListAdvanceRequestParams& operator=(RecognizeVideoCastCrewListAdvanceRequestParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RecognizeVideoCastCrewListAdvanceRequestParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
