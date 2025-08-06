// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIMAGESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETEIMAGESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DeleteImagesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteImagesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FailDeleteImageIds, failDeleteImageIds_);
      DARABONBA_PTR_TO_JSON(SuccessDeleteImageIds, successDeleteImageIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteImagesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FailDeleteImageIds, failDeleteImageIds_);
      DARABONBA_PTR_FROM_JSON(SuccessDeleteImageIds, successDeleteImageIds_);
    };
    DeleteImagesResponseBodyData() = default ;
    DeleteImagesResponseBodyData(const DeleteImagesResponseBodyData &) = default ;
    DeleteImagesResponseBodyData(DeleteImagesResponseBodyData &&) = default ;
    DeleteImagesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteImagesResponseBodyData() = default ;
    DeleteImagesResponseBodyData& operator=(const DeleteImagesResponseBodyData &) = default ;
    DeleteImagesResponseBodyData& operator=(DeleteImagesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failDeleteImageIds_ != nullptr
        && this->successDeleteImageIds_ != nullptr; };
    // failDeleteImageIds Field Functions 
    bool hasFailDeleteImageIds() const { return this->failDeleteImageIds_ != nullptr;};
    void deleteFailDeleteImageIds() { this->failDeleteImageIds_ = nullptr;};
    inline const vector<string> & failDeleteImageIds() const { DARABONBA_PTR_GET_CONST(failDeleteImageIds_, vector<string>) };
    inline vector<string> failDeleteImageIds() { DARABONBA_PTR_GET(failDeleteImageIds_, vector<string>) };
    inline DeleteImagesResponseBodyData& setFailDeleteImageIds(const vector<string> & failDeleteImageIds) { DARABONBA_PTR_SET_VALUE(failDeleteImageIds_, failDeleteImageIds) };
    inline DeleteImagesResponseBodyData& setFailDeleteImageIds(vector<string> && failDeleteImageIds) { DARABONBA_PTR_SET_RVALUE(failDeleteImageIds_, failDeleteImageIds) };


    // successDeleteImageIds Field Functions 
    bool hasSuccessDeleteImageIds() const { return this->successDeleteImageIds_ != nullptr;};
    void deleteSuccessDeleteImageIds() { this->successDeleteImageIds_ = nullptr;};
    inline const vector<string> & successDeleteImageIds() const { DARABONBA_PTR_GET_CONST(successDeleteImageIds_, vector<string>) };
    inline vector<string> successDeleteImageIds() { DARABONBA_PTR_GET(successDeleteImageIds_, vector<string>) };
    inline DeleteImagesResponseBodyData& setSuccessDeleteImageIds(const vector<string> & successDeleteImageIds) { DARABONBA_PTR_SET_VALUE(successDeleteImageIds_, successDeleteImageIds) };
    inline DeleteImagesResponseBodyData& setSuccessDeleteImageIds(vector<string> && successDeleteImageIds) { DARABONBA_PTR_SET_RVALUE(successDeleteImageIds_, successDeleteImageIds) };


  protected:
    // The IDs of the images that failed to be deleted.
    std::shared_ptr<vector<string>> failDeleteImageIds_ = nullptr;
    // The IDs of the images that are successfully deleted.
    std::shared_ptr<vector<string>> successDeleteImageIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
