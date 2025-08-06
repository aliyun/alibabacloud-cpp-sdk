// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEODNARESULTRESPONSEBODYAIVIDEODNARESULTFPSHOTSFPSHOTSLICES_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEODNARESULTRESPONSEBODYAIVIDEODNARESULTFPSHOTSFPSHOTSLICES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication.hpp>
#include <alibabacloud/models/GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices& obj) { 
      DARABONBA_PTR_TO_JSON(Duplication, duplication_);
      DARABONBA_PTR_TO_JSON(Input, input_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices& obj) { 
      DARABONBA_PTR_FROM_JSON(Duplication, duplication_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
    };
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices() = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices(const GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices &) = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices(GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices &&) = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices() = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices& operator=(const GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices &) = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices& operator=(GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duplication_ != nullptr
        && this->input_ != nullptr; };
    // duplication Field Functions 
    bool hasDuplication() const { return this->duplication_ != nullptr;};
    void deleteDuplication() { this->duplication_ = nullptr;};
    inline const Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication & duplication() const { DARABONBA_PTR_GET_CONST(duplication_, Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication) };
    inline Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication duplication() { DARABONBA_PTR_GET(duplication_, Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication) };
    inline GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices& setDuplication(const Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication & duplication) { DARABONBA_PTR_SET_VALUE(duplication_, duplication) };
    inline GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices& setDuplication(Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication && duplication) { DARABONBA_PTR_SET_RVALUE(duplication_, duplication) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesInput) };
    inline Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesInput input() { DARABONBA_PTR_GET(input_, Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesInput) };
    inline GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices& setInput(const Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices& setInput(Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


  protected:
    std::shared_ptr<Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication> duplication_ = nullptr;
    std::shared_ptr<Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesInput> input_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
