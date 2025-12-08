// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDFACESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDFACESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchAddFacesResponseBodyDataFailedFaces.hpp>
#include <alibabacloud/models/BatchAddFacesResponseBodyDataInsertedFaces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class BatchAddFacesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddFacesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FailedFaces, failedFaces_);
      DARABONBA_PTR_TO_JSON(InsertedFaces, insertedFaces_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddFacesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedFaces, failedFaces_);
      DARABONBA_PTR_FROM_JSON(InsertedFaces, insertedFaces_);
    };
    BatchAddFacesResponseBodyData() = default ;
    BatchAddFacesResponseBodyData(const BatchAddFacesResponseBodyData &) = default ;
    BatchAddFacesResponseBodyData(BatchAddFacesResponseBodyData &&) = default ;
    BatchAddFacesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddFacesResponseBodyData() = default ;
    BatchAddFacesResponseBodyData& operator=(const BatchAddFacesResponseBodyData &) = default ;
    BatchAddFacesResponseBodyData& operator=(BatchAddFacesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedFaces_ == nullptr
        && return this->insertedFaces_ == nullptr; };
    // failedFaces Field Functions 
    bool hasFailedFaces() const { return this->failedFaces_ != nullptr;};
    void deleteFailedFaces() { this->failedFaces_ = nullptr;};
    inline const vector<Models::BatchAddFacesResponseBodyDataFailedFaces> & failedFaces() const { DARABONBA_PTR_GET_CONST(failedFaces_, vector<Models::BatchAddFacesResponseBodyDataFailedFaces>) };
    inline vector<Models::BatchAddFacesResponseBodyDataFailedFaces> failedFaces() { DARABONBA_PTR_GET(failedFaces_, vector<Models::BatchAddFacesResponseBodyDataFailedFaces>) };
    inline BatchAddFacesResponseBodyData& setFailedFaces(const vector<Models::BatchAddFacesResponseBodyDataFailedFaces> & failedFaces) { DARABONBA_PTR_SET_VALUE(failedFaces_, failedFaces) };
    inline BatchAddFacesResponseBodyData& setFailedFaces(vector<Models::BatchAddFacesResponseBodyDataFailedFaces> && failedFaces) { DARABONBA_PTR_SET_RVALUE(failedFaces_, failedFaces) };


    // insertedFaces Field Functions 
    bool hasInsertedFaces() const { return this->insertedFaces_ != nullptr;};
    void deleteInsertedFaces() { this->insertedFaces_ = nullptr;};
    inline const vector<Models::BatchAddFacesResponseBodyDataInsertedFaces> & insertedFaces() const { DARABONBA_PTR_GET_CONST(insertedFaces_, vector<Models::BatchAddFacesResponseBodyDataInsertedFaces>) };
    inline vector<Models::BatchAddFacesResponseBodyDataInsertedFaces> insertedFaces() { DARABONBA_PTR_GET(insertedFaces_, vector<Models::BatchAddFacesResponseBodyDataInsertedFaces>) };
    inline BatchAddFacesResponseBodyData& setInsertedFaces(const vector<Models::BatchAddFacesResponseBodyDataInsertedFaces> & insertedFaces) { DARABONBA_PTR_SET_VALUE(insertedFaces_, insertedFaces) };
    inline BatchAddFacesResponseBodyData& setInsertedFaces(vector<Models::BatchAddFacesResponseBodyDataInsertedFaces> && insertedFaces) { DARABONBA_PTR_SET_RVALUE(insertedFaces_, insertedFaces) };


  protected:
    std::shared_ptr<vector<Models::BatchAddFacesResponseBodyDataFailedFaces>> failedFaces_ = nullptr;
    std::shared_ptr<vector<Models::BatchAddFacesResponseBodyDataInsertedFaces>> insertedFaces_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
