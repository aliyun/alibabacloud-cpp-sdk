// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTREQUESTPARAMS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTREQUESTPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class RecognizeVideoCastCrewListRequestParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCastCrewListRequestParams& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCastCrewListRequestParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    RecognizeVideoCastCrewListRequestParams() = default ;
    RecognizeVideoCastCrewListRequestParams(const RecognizeVideoCastCrewListRequestParams &) = default ;
    RecognizeVideoCastCrewListRequestParams(RecognizeVideoCastCrewListRequestParams &&) = default ;
    RecognizeVideoCastCrewListRequestParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCastCrewListRequestParams() = default ;
    RecognizeVideoCastCrewListRequestParams& operator=(const RecognizeVideoCastCrewListRequestParams &) = default ;
    RecognizeVideoCastCrewListRequestParams& operator=(RecognizeVideoCastCrewListRequestParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RecognizeVideoCastCrewListRequestParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
